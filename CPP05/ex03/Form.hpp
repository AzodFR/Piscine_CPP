#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Form
{
    private:
        std::string const &_name;
        bool               _signed;
        int  const         _canSign;
        int  const         _canExec;
        Form();
    public:
        Form(std::string const &, int const, int const);
        Form(Form const &);
        virtual ~Form();
        Form &operator=(Form const &);
        void beSigned(Bureaucrat const &);
        std::string const &getName() const {return _name;};
        int const getCanSign() const {return _canSign;};
        int const getCanExec() const {return _canExec;};
        bool isSigned() const {return _signed;};
        virtual void execute(Bureaucrat const &) const = 0;
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
        class NotSignedFormException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("\e[91mThe Form is not signed !\e[0m");
            }
        };
};

std::ostream &operator<<(std::ostream &, const Form&);

#endif