#ifndef RAYGUN_HPP
# define RAYGUN_HPP

# include "AWeapon.hpp"

class RayGun : public AWeapon
{
	public:
		RayGun(void);
		RayGun &operator=(RayGun const &);
		RayGun(RayGun const &);
		virtual ~RayGun(void) {return;};
		virtual void attack(void) const;
};
#endif