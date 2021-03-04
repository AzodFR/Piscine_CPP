#include "phone.hpp"

int prompt(void)
{
     std::cout << "\e[0m{ADD | SEARCH | EXIT}" << std::endl << "\e[92m> \e[93m";
    return (1);
}

int main (void)
{
    Contact all[9];
    int i = -1;

    std::string rep = "";
    while (prompt() && std::getline(std::cin, rep))
    {
        std::cout << "\e[0m";
        if (rep == "EXIT")
            break;
        else if (rep == "ADD")
        {
            i++;
            if (i < 9 || (i > 8 && override_contact(&i, all)))
             all[i] = add(all[i]);
        }
        else if (rep == "SEARCH")
            search(all, 1);
        else if (rep.empty())
            continue;
        else
            std::cout << "\e[91mOOPS ! Wrong command" << std::endl;
    }
    std::cout << std::endl          << "\x1b[2J\e[107;30m d888   d888  .d8888b.  \e[107;38;5;202m.d8888b.  d888  .d888888b. \e[0m" << std::endl
                                    << "\e[107;30md8888  d8888 d88P  Y88b \e[107;38;5;202md88P  Y88bd8888 d88P  Y88b \e[0m" << std::endl
                                    << "\e[107;30m  888    888 Y88b. d88P       \e[107;38;5;202m 888  888 Y88b. d88P \e[0m" << std::endl
                                    << "\e[107;30m  888    888  \"Y88888\"     \e[107;38;5;202m  .d88P  888  \"Y88888\"  \e[0m" << std::endl
                                    << "\e[107;30m  888    888 .d8P""Y8b.    \e[107;38;5;202m.od888P\"   888 .d8P\"\"Y8b. \e[0m" << std::endl
                                    << "\e[107;30m  888    888 888    88 \e[107;38;5;202m8d88P\"       888 888    888 \e[0m" << std::endl
                                    << "\e[107;30m  888    888 Y88b  d88 \e[107;38;5;202mP888\"        888 Y88b  d88P \e[0m" << std::endl
                                    << "\e[107;30m88888888888888\"Y8888P\"\e[107;38;5;202m 888888888 8888888\"Y888888P\" \e[0m" << std::endl
    << std::endl << "\e[32mGood bye !\e[0m" << std::endl;
}