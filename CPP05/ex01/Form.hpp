#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Form
{
    private:
        std::string const _name;
        bool               _signed;
        int          _canSign;
        int           _canExec;
        Form();
    public:
        Form(std::string const &, int, int);
        Form(Form const &);
        virtual ~Form();
        Form &operator=(Form const &);
        void beSigned(Bureaucrat const &);
        std::string const getName() const {return _name;};
        int getCanSign() const {return _canSign;};
        int getCanExec() const {return _canExec;};
        bool isSigned() const {return _signed;};
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

std::ostream &operator<<(std::ostream &, const Form&);

#endif