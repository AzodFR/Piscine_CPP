#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	_name = name;
	_title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &object)
{
	_name = object.getName();
	_title = object.getTitle();
	*this = object;
}

Sorcerer &Sorcerer::operator=(Sorcerer &object)
{
	_title = object.getTitle();
	_name = object.getName();
	return (*this);
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &victim) const
{
	victim.getPolymorphed();
}

void Sorcerer::polymorph(Knight const &victim) const
{
	victim.getPolymorphed();
}
std::ostream &operator<<(std::ostream &output, Sorcerer& s)
{
	output << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return (output);
}