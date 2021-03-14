#include "Enemy.hpp"

Enemy::Enemy(const std::string &type, int hp) : _type(type), _hp(hp)
{
}
    
Enemy &Enemy::operator=(const Enemy &object)
{
    _type = object._type;
    _hp = object._hp;
    return (*this);
}

Enemy::Enemy(const Enemy &object) : _type(object._type), _hp(object._hp)
{
}

void Enemy::takeDamage(int i)
{
	if (i >= 0)
		_hp -= i;
	if (_hp <= 0)
		delete this;
}