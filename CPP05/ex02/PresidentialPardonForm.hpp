#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm : public Form
{ 
    private:
        PresidentialPardonForm();
        std::string const &_target;
        std::string const _name = "Pardon";
    public:
        PresidentialPardonForm(std::string const &);
        PresidentialPardonForm(PresidentialPardonForm const &);
        std::string const &getTarget() const { return _target;};
        ~PresidentialPardonForm();
        void execute(Bureaucrat const &) const;
};

#endif