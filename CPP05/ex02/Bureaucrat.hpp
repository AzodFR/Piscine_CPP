#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
    private:
        std::string const &_name;
        int _grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string const &, int);
        Bureaucrat(Bureaucrat const &);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &);
        std::string const &getName() const;
        int getGrade() const;
        Bureaucrat &operator++();
        Bureaucrat &operator--();
        void SignForm(Form &);
        void executeForm(Form const &);
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("\e[91mGrade is too high !\e[0m");
            }
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("\e[91mGrade is too low !\e[0m");
            }
        };
};

#include "Form.hpp"

std::ostream &operator<<(std::ostream &, const Bureaucrat&);

#endif