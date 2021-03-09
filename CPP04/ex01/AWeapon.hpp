#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	proo:
		std::string const &_name;
		int			_dmg;
		int			_cost;
		AWeapon(void);
	public:
		AWeapon(std::string const &, int, int);
		AWeapon(const AWeapon&);
		AWeapon &operator=(const AWeapon&);
		virtual ~AWeapon();
		std::string const &getName() const { return _name; };
		int getAPCost() const { return _cost; };
		int getDamage() const { return _dmg; };
		virtual void attack() const = 0;
};
#endif