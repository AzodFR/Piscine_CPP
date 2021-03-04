#include "phone.hpp"

int get_choice(void)
{
    std::string req;

    while (std::getline(std::cin, req))
    {
        if (req == "0" || req == "1" || req == "2" || req == "3" || req == "4" || req == "5" || req == "6" || req == "7" || req == "8")
            break;
        else if (req == "-1")
            return (-1);
        else
            std::cout << "\e[91mOOPS ! Wrong arguments, try again !\e[0m" << std::endl;
        std::cout << "\e[92m> \e[93m";
    }
    return (req[0] - '0');
}


int override_contact(int *i, Contact *all)
{
    std::string req;

    std::cout << "The Contact List is \e[91mfull\e[0m ? What contact do you want to override ? (0-8: override | SHOW: show the list | -1: cancel)" << std::endl << "\e[92m> \e[93m";
    while (std::getline(std::cin, req))
    {
        if (req == "0" || req == "1" || req == "2" || req == "3" || req == "4" || req == "5" || req == "6" || req == "7" || req == "8")
            break;
        else if (req == "-1" && (*i = 9))
            return (0);
        else if (req == "SHOW")
            search(all, 0);
        else
            std::cout << "\e[91mOOPS ! Wrong arguments\e[0m" << std::endl;
        std::cout << "\e[92m> \e[93m";
    }
    *i = req[0] - '0';
    return (1);
}