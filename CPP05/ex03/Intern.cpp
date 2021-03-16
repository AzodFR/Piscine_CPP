#include "Intern.hpp"

Intern::Intern(){};

Intern::~Intern(){};

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string list[] = {"robotomise", "pardon", "shrub"};
    Form *(Intern::*command[])(std::string const &) = {&Intern::createRRF, &Intern::createPPF, &Intern::createSCF};
    for (int i = 0; i < 3; i++)
        if (name == list[i])
        {
            std::cout << "Intern create the " << name << "'s form" << std::endl;;
           return ((this->*command[i])(target));
        }
    std::cerr << "Type of form: \e[93m" << name << "\e[0m is unrecognized" << std::endl;
    return (NULL);
}

Form *Intern::createPPF(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::createRRF(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::createSCF(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}