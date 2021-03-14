#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		std::string const &_name;
		int	_ap;
		AWeapon *_weapon;
		Character();
	public:
	Character(std::string const& name);
	Character(const Character&);
	Character &operator=(const Character&);
	virtual ~Character() {return;};
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName(void) const { return _name; };
	int getAp(void) const { return _ap; };
	AWeapon *getWeapon(void) const{ return _weapon; };
};

std::ostream &operator<<(std::ostream &, const Character&);

#endif