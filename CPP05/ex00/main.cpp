#include "Bureaucrat.hpp"

int main()
{
    { //No error here
        Bureaucrat a("Theo", 1);
        Bureaucrat b("Quentin", 150);
        Bureaucrat c("Copy", 42);


        std::cout << a;
        std::cout << b;
        std::cout << c;
        c = b;
        --a;
        ++b;
        std::cout << a;
        std::cout << b;
        std::cout << c;
    }
    { // Grade 0 is too high
        try
        {
            Bureaucrat a("Theo", 0);

            std::cout << a;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    { // Grade 151 is too low
        try
        {
            Bureaucrat a("Theo", 151);

            std::cout << a;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    { // Grade + 1 is too low
        try
        {
            Bureaucrat a("Theo", 150);

            std::cout << a;
            std::cout << --a;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    { // Grade - 1 is too high
        try
        {
            Bureaucrat a("Theo", 1);

            std::cout << a;
            std::cout << ++a;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}