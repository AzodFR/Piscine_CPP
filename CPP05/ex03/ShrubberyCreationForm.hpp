#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{ 
    private:
        ShrubberyCreationForm();
        std::string const &_target;
    public:
        ShrubberyCreationForm(std::string const &);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        std::string const &getTarget() const { return _target;};
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &) const;
};

#endif