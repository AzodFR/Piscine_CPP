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

void    logo(std::string s)
{
        std::cout << std::endl          << "\x1b[2J\e[107;30m d888   d888  .d8888b.  \e[107;38;5;202m.d8888b.  d888  .d888888b. \e[0m" << std::endl
                                    << "\e[107;30md8888  d8888 d88P  Y88b \e[107;38;5;202md88P  Y88bd8888 d88P  Y88b \e[0m" << std::endl
                                    << "\e[107;30m  888    888 Y88b. d88P       \e[107;38;5;202m 888  888 Y88b. d88P \e[0m" << std::endl
                                    << "\e[107;30m  888    888  \"Y88888\"     \e[107;38;5;202m  .d88P  888  \"Y88888\"  \e[0m" << std::endl
                                    << "\e[107;30m  888    888 .d8P""Y8b.    \e[107;38;5;202m.od888P\"   888 .d8P\"\"Y8b. \e[0m" << std::endl
                                    << "\e[107;30m  888    888 888    88 \e[107;38;5;202m8d88P\"       888 888    888 \e[0m" << std::endl
                                    << "\e[107;30m  888    888 Y88b  d88 \e[107;38;5;202mP888\"        888 Y88b  d88P \e[0m" << std::endl
                                    << "\e[107;30m88888888888888\"Y8888P\"\e[107;38;5;202m 888888888 8888888\"Y888888P\" \e[0m" << std::endl
    << std::endl << "\e[32m                 " << s << "\e[0m" << std::endl << std::endl << std::endl;
}