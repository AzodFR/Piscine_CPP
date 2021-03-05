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

    logo("Welcome !");
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
    logo("Good bye !");
}