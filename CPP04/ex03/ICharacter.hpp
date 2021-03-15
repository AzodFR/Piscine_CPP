#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria*) = 0;
		virtual void unequip(int) = 0;
		virtual void use(int , ICharacter&) = 0;
};
#include "AMateria.hpp"
#endif