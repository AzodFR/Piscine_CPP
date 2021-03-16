#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "Form.hpp"

class RobotomyRequestForm : public Form
{ 
    private:
        RobotomyRequestForm();
        std::string const &_target;
        std::string const _name = "Robotomy";
    public:
        RobotomyRequestForm(std::string const &);
        RobotomyRequestForm(RobotomyRequestForm const &);
        std::string const &getTarget() const { return _target;};
        ~RobotomyRequestForm();
        void execute(Bureaucrat const &) const;
};

#endif