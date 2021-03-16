#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

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

std::ostream &operator<<(std::ostream &, const Bureaucrat&);

#endif