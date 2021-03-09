#include "Victim.hpp"


Victim::Victim(std::string const &name)
{
	_name = name;
	std::cout << "Some random victim called "<< name << " just appeared!" << std::endl;
}

Victim::Victim(Victim &object)
{
	_name= object.getName();
	*this = object;
}

Victim &Victim::operator=(Victim &object)
{
	_name = object.getName();
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Victim& s)
{
	output << "I'm " << s.getName() <<  " and I like otters!" << std::endl;
	return (output);
}