#include "Enemy.hpp"

Enemy::Enemy(std::string const &name, int hp, std::string const &type) : _name(name), _hp(hp), _type(type)
{
}
Enemy::Enemy(const Enemy&object) : _name(object.getName()), _hp(object.getHP()), _type(object.getType())
{
}
Enemy &Enemy::operator=(const Enemy &object)
{
	return (*this);
}

void Enemy::takeDamage(int i)
{
	if (i >= 0)
		_hp -= i;
}