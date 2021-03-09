#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Knight paul("Paul");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(paul);
	return 0;
	}