#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj): _name(obj.getName())
{
    _grade = obj.getGrade();
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
    _grade = obj.getGrade();
    return (*this);
}

std::string const &Bureaucrat::getName() const {return _name;}

int Bureaucrat::getGrade() const {return _grade;}

Bureaucrat &Bureaucrat::operator--(void)
{
	if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade = _grade + 1;
	return (*this);
}

Bureaucrat &Bureaucrat::operator++(void)
{
	if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        _grade = _grade - 1;
	return (*this);
}

void Bureaucrat::SignForm(Form &f)
{
    if (f.isSigned())
    {
        std::cout << "\e[93mThe form is already signed !\e[0m" << std::endl;
        return;
    }
    try
    {
        f.beSigned(*this);
        std::cout << _name << " \e[92msigns\e[0m " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " \e[91mcan't sign\e[0m " << f.getName() << std::endl;
    }
    
}

void Bureaucrat::executeForm(Form &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat& b)
{
	output << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (output);
}