#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *_bag[4];
		std::string _name;
		Character();
	public:
		Character(std::string const &);
		Character(Character &);
        Character &operator=(Character &);
		AMateria *getItem(int index) const{ return _bag[index] ;};
		void delItem(int index) const { delete _bag[index];};
		std::string const & getName() const { return _name;};
		~Character();
		void equip(AMateria *);
		void unequip(int);
		void use(int, ICharacter &);
};
#endif