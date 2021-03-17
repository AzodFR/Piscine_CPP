#include "Intern.hpp"

int main()
{
    { //SHRUB
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *shrub;

        try
        {
            shrub = estelle.makeForm("shrub", "theo");
            me.SignForm(*shrub);
            me.executeForm(*shrub);
            delete shrub;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
        { //PARDON
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *pardon;

        try
        {
            pardon = estelle.makeForm("pardon", "theo");
            me.SignForm(*pardon);
            me.executeForm(*pardon);
            delete pardon;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    { //ROBOT
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *robot;


        try
        {
            robot = estelle.makeForm("robotomise", "theo");
            me.SignForm(*robot);
            me.executeForm(*robot);
            delete robot;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    { //Unknow
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *root;

        try
        {
            root = estelle.makeForm("root", "theo");
            me.SignForm(*root);
            me.executeForm(*root);
            delete root;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

}