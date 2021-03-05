#include <string>
#include <sstream> 
#include "Brain.hpp"

Brain::Brain(void)
{
    this->knowledge = 140;
    this->age = 19;
    return ;
}

Brain::~Brain(void)
{
    return ;
}

std::string Brain::identifier(void) const
{
    std::string ret = "0x";
    std::stringstream add;

    add  << std::hex << std::uppercase << (long)this;
    ret.append(add.str());
    return (ret);
}
