#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee Atack on \e[93m" << target << "\e[0m" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged Atack on \e[93m" << target << "\e[0m" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "\e[93m" << target << "\e[0m is now intimidate..." << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    int i = -1;

    void (Human::*command[3])(const std::string &) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
    std::string exist[] = {"melee", "ranged", "intimidating"};
    
    while (++i < 3)
        if (action_name == exist[i])
        {
            (this->*command[i])(target);
            return ;
        }
    std::cout << "\e[91mUnknown action !\e[0m" << std::endl;
}