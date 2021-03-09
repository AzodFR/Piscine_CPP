#include "RadScorpion.hpp"

RadScorpion::RadScorpion(std::string const &name) : Enemy(name, 80, "Rad Scorpion")
{
	std::cout << "<\e[91m" << name << "\e[0m> * click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "<\e[91m" << getName() << "\e[0m> * SPROTCH *" << std::endl;
}