#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int check_args(int ac)
{
    if (ac < 4 || ac > 4)
    {
        std::cout << "replace: \e[91mWrong number of args ! ";
        if (ac == 2)
            std::cout << "\e[95m<Missing text_to_replace replacing_text> ";
        else if (ac == 3)
            std::cout << "\e[95m<Missing replacing_text> ";
        std::cout << std::endl << "\e[0mreplace: \e[91mPlease use: \e[93m./replace FILE text_to_replace replacing_text\e[0m" << std::endl;
        return (0);
    }
    return (1);

}

int replace(char **av)
{
    std::ostringstream text;
    int pos;

    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cout << "replace: \e[91mFile can't be opened ! \e[0m" << std::endl;
        return (0);
    }
     
    text << file.rdbuf();
    std::string str = text.str();
    std::string str_search = av[2];
    std::string str_replace = av[3];
	std::string name = av[1];
    while ((pos = str.find(str_search)) != EOF)
        str.replace(pos, std::string(str_search).length(), str_replace);
    file.close();

    std::ofstream out_file(name + ".replace");
    out_file << str;     
    return (1);
}

int main(int ac, char **av)
{
    if (!check_args(ac))
        return (1);
    if(!replace(av))
        return(1);
    return (0);
}