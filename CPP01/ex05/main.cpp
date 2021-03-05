#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>
int main(void)
{
    Human theo;

    std::cout << theo.identifier() << std::endl;
    std::cout << theo.getBrain().identifier() << std::endl;
    return (0);
}