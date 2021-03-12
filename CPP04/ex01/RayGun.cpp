#include "RayGun.hpp"

RayGun::RayGun(void) : AWeapon("\e[92mRay Gun\e[0m",10,50)
{
}

RayGun::RayGun(RayGun const &object) : AWeapon(object)
{
}

RayGun &RayGun::operator=(RayGun const &object)
{
	AWeapon::operator=(object);
	return *this;
}

void RayGun::attack(void) const
{
	std::cout << "* baaawaaahouiiing *" << std::endl;
}