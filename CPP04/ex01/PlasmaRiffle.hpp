#ifndef PLASMARIFFLE_HPP
# define PLASMARIFFLE_HPP

# include "AWeapon.hpp"

class PlasmaRiffle : public AWeapon
{
	public:
		PlasmaRiffle(void);
		PlasmaRiffle &operator=(PlasmaRiffle const &);
		PlasmaRiffle(PlasmaRiffle const &);
		virtual ~PlasmaRiffle(void) {return;};
		virtual void attack(void) const;
};
#endif