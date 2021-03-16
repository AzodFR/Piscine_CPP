#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    { // Working all
        try
        {
            ShrubberyCreationForm shrub("theo");
            RobotomyRequestForm robot("theo");
            PresidentialPardonForm pardon("theo");
            Bureaucrat me("me", 1);

            std::cout << shrub;
            me.SignForm(shrub);
            std::cout << shrub;
            me.executeForm(shrub);
            std::cout << std::endl;

            std::cout << robot;
            me.SignForm(robot);
            std::cout << robot;
            me.executeForm(robot);      
            std::cout << std::endl;

            std::cout << pardon;
            me.SignForm(pardon);
            std::cout << pardon;
            me.executeForm(pardon);
            std::cout << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    { // Grade too low
        try
        {
            ShrubberyCreationForm shrub("theo");
            Bureaucrat me("me", 1);
            Bureaucrat you("you", 150);

            std::cout << shrub;
            me.SignForm(shrub);
            std::cout << shrub;
            you.executeForm(shrub);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
        { // Not signed
        try
        {
            ShrubberyCreationForm shrub("theo");
            Bureaucrat me("me", 1);

            std::cout << shrub;
            me.executeForm(shrub);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}