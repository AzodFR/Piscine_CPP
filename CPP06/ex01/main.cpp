#include <string>
#include <ctime>
#include <iostream>

#define RED "\e[91m"
#define GREEN "\e[92m"
#define YELLOW "\e[93m"
#define RESET "\e[0m"

struct Data
{
    std::string s1;
    int s2;
    std::string s3;
};

std::string randomString(int n)
{
    std::string base = "aZeRtYuIoPqSdFgHjKlMwXcVbNAzErTyUiOpQsDfGhJkLmWxCvBn";
    std::string ret = "";
    for (int i = 0; i < 8; i++)
    {
        srand(time(0) + i + (ret.length() * (i * n) + ret.length()));
        if (n == 3)
            srand(time(0) + rand() % 56);
        ret += base[rand() % 52];
    }
    return ret;
}

int randomInt(int n)
{
    std::string base = "1234567890";
    std::string ret = "";
    for (int i = 0; i < 4; i++)
    {
        srand(time(0) + i + (ret.length() * (i * n) + ret.length()));
        ret += base[rand() % 10];
    }
    srand(time(0) +  (ret.length() * n) + ret.length());
    if (ret[0] == '0')
        ret += base[rand() % 10];
    return std::atoi(ret.c_str());
}

Data *deserialize(void *v)
{
    Data *d = new Data;
    unsigned char *s = (unsigned char *)v;

    d->s1 = "";
    d->s2 = 0;
    d->s3 = "";
    char c[2];
    c[1] = 0;
    for(int i = 0; i < 8; i++)
    {
        c[0] =  s[i];
        d->s1 += c;
    }
    for(int i = 8; i < 12; i++)
    {
       d->s2 += (reinterpret_cast<int>(s[i] << 8 * i));
    }
    for(int i = 12; i < 20; i++)
    {
        c[0] = s[i];
        d->s3 += c;
    }
    return (d);
}

void *serialize()
{
    Data d;
    unsigned char *raw = new unsigned char[21];

    d.s1 = randomString(1);
    d.s2 = randomInt(2);
    d.s3 = randomString(3);

    for (int i = 0; i < 8; i++)
        raw[i] = reinterpret_cast<char>(d.s1[i]);
    for (int i = 0; i < 4; i++)
        raw[i + 8] = reinterpret_cast<int>(d.s2 >> (8 * i));
    for (int i = 0; i < 8; i++)
        raw[i + 12] = reinterpret_cast<char>(d.s3[i]);
    raw[20] = 0;
    std::cout << "Serialize: " << RED << d.s1 << GREEN << d.s2 << YELLOW << d.s3 << RESET << std::endl;
    return raw;
}

int main(void)
{
    Data *d;
    unsigned char *raw;

   raw = (unsigned char *)(serialize());
   d = deserialize(raw);
   
   std::cout << std::endl << "Deserialize: " << std::endl;
   std::cout << "String 1: " << RED << d->s1 << RESET << std::endl;
   std::cout << "Int: " << GREEN << d->s2 << RESET << std::endl;
   std::cout << "String 3: " << YELLOW << d->s3 << RESET << std::endl;
   delete raw;
   delete [] reinterpret_cast<char *>(d);
    return 0;
}