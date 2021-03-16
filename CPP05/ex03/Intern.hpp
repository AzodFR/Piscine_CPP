#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        Form *createRRF(std::string const &);
        Form *createPPF(std::string const &);
        Form *createSCF(std::string const &);
    public:
        Intern();
        ~Intern();
        Form *makeForm(std::string const &, std::string const &);
};

#endif