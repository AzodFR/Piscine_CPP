#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		
	public:
	Character(std::string const & name);
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName() const;};
#endif