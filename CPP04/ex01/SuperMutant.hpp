#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(std::string const &);
		virtual ~SuperMutant(void);
		void takeDamage(int);
};
#endif