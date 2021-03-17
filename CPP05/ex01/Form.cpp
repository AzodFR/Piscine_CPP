#include "Form.hpp"

Form::Form(std::string const &name, int cansign, int canexec) : _name(name), _signed(false) , _canSign(cansign), _canExec(canexec)
{
    if (cansign < 1 || canexec < 1)
        throw GradeTooHighException();
    else if (cansign > 150 || canexec > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &obj) : _name(obj.getName()), _signed(false), _canSign(obj.getCanSign()), _canExec(obj.getCanExec()){}

Form::~Form(){}

void Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > _canSign)
        throw GradeTooLowException();
    else
        _signed = true;
}


std::ostream &operator<<(std::ostream &output, const Form &f)
{
    output << "Form: " << f.getName() << std::endl;
    output << "Grade to be signed: " << f.getCanSign() << std::endl;
    output << "Grade to be executed: " << f.getCanExec() << std::endl;
    output << "Signed: ";
    if (f.isSigned())
        output << "\e[92mYes\e[0m";
    else
        output << "\e[91mNo\e[0m";
    output << std::endl;
    return output;
}