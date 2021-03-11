#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL)
{
}

Character::Character(const Character&object) : _name(object.getName()), _ap(object.getAp()), _weapon(object.getWeapon())
{
}

Character &Character::operator=(const Character &object)
{
	return (*this);
}

void Character::recoverAP(void)
{
    _ap += 10;

    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (_ap < _weapon->getAPCost())
        return ;

    std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    _ap -= _weapon->getAPCost();
    enemy->takeDamage(_weapon->getDamage());
    _weapon->attack();
}

std::ostream &operator<<(std::ostream &output, const Character& c)
{

	output << c.getName() << " has " << c.getAp() << " AP and ";
    if (c.getWeapon())
        output << "wields a " << c.getWeapon()->getName();
    else
        output << "is unarmed";
    output << std::endl;
	return (output);
}