#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &name) : Form("Pardon", 25, 5) , _target(name){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj): Form("Pardon", 145, 137) , _target(obj.getTarget()){}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->isSigned())
    {
        if (executor.getGrade() > getCanExec())
            throw GradeTooLowException();
        std::cout << _target << " has been pardonned by Zafod Beeblebrox !" << std::endl;
    }
    else
        throw NotSignedFormException();
}