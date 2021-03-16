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

std::ostream &operator<<(std::ostream &output, const Bureaucrat& b)
{
	output << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (output);
}