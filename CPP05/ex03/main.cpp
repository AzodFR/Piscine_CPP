#include "Intern.hpp"

int main()
{
    { //SHRUB
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *shrub;

        shrub = estelle.makeForm("shrub", "theo");
        if (shrub)
        {
            me.SignForm(*shrub);
            me.executeForm(*shrub);
            delete shrub;
        }
    }
        { //PARDON
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *pardon;

        pardon = estelle.makeForm("pardon", "theo");
        if (pardon)
        {
            me.SignForm(*pardon);
            me.executeForm(*pardon);
            delete pardon;
        }
    }
    { //ROBOT
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *robot;

        robot = estelle.makeForm("robotomise", "theo");
        if (robot)
        {
            me.SignForm(*robot);
            me.executeForm(*robot);
            delete robot;
        }
    }
    { //Unknow
        Intern estelle;
        Bureaucrat me("me", 1);
        Form *root;

        root = estelle.makeForm("root", "theo");
        if (root)
        {
            me.SignForm(*root);
            me.executeForm(*root);
            delete root;
        }
    }

}