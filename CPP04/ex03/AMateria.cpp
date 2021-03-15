#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &object) : _type(object.getType()), _xp(object.getXP())
{
}

AMateria &AMateria::operator=(const AMateria &object)
{
	_xp = object.getXP();
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType () const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}