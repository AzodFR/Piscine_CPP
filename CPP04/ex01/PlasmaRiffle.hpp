#ifndef PLASMARIFFLE_HPP
# define PLASMARIFFLE_HPP

# include "AWeapon.hpp"

class PlasmaRiffle : public AWeapon
{
	public:
		PlasmaRiffle(void);
		virtual ~PlasmaRiffle(void);
		void attack(void);
};
#endif