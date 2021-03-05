#include "Brain.hpp"
#include "Human.hpp"
#include <string>
Human::Human(void)
{
    return ;
}

Human::~Human(void)
{
    return ;
}



const Brain &Human::getBrain(void)
{
    return brain;
}

std::string Human::identifier(void)
{
    return (brain.identifier());
}