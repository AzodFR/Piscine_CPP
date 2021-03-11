#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist &operator=(PowerFist const &);
		PowerFist(PowerFist const &);
		virtual ~PowerFist(void) {return;};
		virtual void attack(void) const;
};
#endif