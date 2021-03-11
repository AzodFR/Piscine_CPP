#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	private:
		std::string _name;
		int			_dmg;
		int			_cost;
		AWeapon(void);
	public:
		AWeapon(std::string const &, int, int);
		AWeapon(AWeapon const&);
		AWeapon &operator=(AWeapon const &);
		virtual ~AWeapon() {return;};
		std::string virtual getName() const { return _name; };
		int getAPCost() const { return _cost; };
		int getDamage() const { return _dmg; };
		virtual void attack() const = 0;
};
#endif