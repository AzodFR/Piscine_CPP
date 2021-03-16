#include "Form.hpp"

int main ()
{
    { // Good creation and try to sign
        Form a("Formulaire", 5, 25);

        Bureaucrat me("Theo", 4);
        Bureaucrat you("Quentin", 27);

        std::cout << a<< std::endl;
        std::cout << me;
        std::cout << you << std::endl;

        you.SignForm(a);
        std::cout << a<< std::endl;
        me.SignForm(a);
        std::cout << a<< std::endl;
        you.SignForm(a);
        std::cout << a<< std::endl;
    }
    { // Creation too low
        try
        {  
            Form a("Formulaire", 254, 25);

            std::cout << a;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    { // Creation too high
        try
        {  
            Form a("Formulaire", 0, 25);

            std::cout << a;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}