#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string name, int legs, std::string color)
{
	this->name = name;
	this->legs = legs;
	this->color = color;
	std::cout << "The \e[93m" << color << " \e[0mPony \e[92m" << name << " \e[0mis created !" << std::endl << std::endl;
} 

Pony::~Pony(void)
{
	std::cout << "The \e[93m" << color << " \e[0mPony \e[91m" << name << " \e[0mis died !" << std::endl << std::endl;
}

void Pony::run(void)
{
	if (this->legs < 1)
		std::cout << "\e[95mScientist \e[0mdiscover \e[92m" << name << " \e[0m and want to do some experience on it..." << std::endl;
	else if (this->legs < 4)
		std::cout << "WOWOWOWO ! \e[92m" << name << "\e[0m felt when he tries to run..." << std::endl << std::endl;
	else if (this->legs == 4)
		std::cout << "\e[92m" << name << "\e[0m start to run normally..." << std::endl << std::endl;
	else if (this->legs > 4)
		std::cout << "\e[92m" << name << " \e[0mrun super fast !" << std::endl << std::endl;
}