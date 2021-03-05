#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void set_first_name(void);
        void set_last_name(void);
        void set_nickname(void);
        void set_login(void);
        void set_postal(void);
        void set_email(void);
        void set_phone(void);
        void set_birth(void);
        void set_meal(void);
        void set_underwear(void);
        void set_secret(void);
        void show_one(void);
        void show_all(int i);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_login(void);
        std::string get_postal(void);
        std::string get_email(void);
        std::string get_phone(void);
        std::string get_birth(void);
        std::string get_meal(void);
        std::string get_underwear(void);
        std::string get_secret(void);

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal;
        std::string email;
        std::string phone;
        std::string birth;
        std::string meal;
        std::string underwear;
        std::string secret;
};
#endif