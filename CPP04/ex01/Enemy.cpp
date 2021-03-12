#include "Enemy.hpp"

Enemy::Enemy(const std::string &type, int hp) : _hp(hp), _type(type)
{
}
    
Enemy &Enemy::operator=(const Enemy &object)
{
    _type = object._type;
    _hp = object._hp;
    return (*this);
}

Enemy::Enemy(const Enemy &object) : _hp(object._hp), _type(object._type)
{
}

void Enemy::takeDamage(int i)
{
	if (i >= 0)
		_hp -= i;
	if (_hp <= 0)
		delete this;
}