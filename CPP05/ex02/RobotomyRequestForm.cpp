#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &name) : Form(_name, 72, 45) , _target(name){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): Form(_name, 72, 45) , _target(obj.getTarget()){}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->isSigned())
    {
        if (executor.getGrade() > getCanExec())
            throw GradeTooLowException();
        std::cout << "*vffffffffffffffffffffffffffffffffffffffffffff*" << std::endl;
        std::cout << _target << " has been robotomised !" << std::endl;
    }
    else
        throw NotSignedFormException();
}