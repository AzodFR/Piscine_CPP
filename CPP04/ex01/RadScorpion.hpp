#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(std::string const &);
		virtual ~RadScorpion(void);
};
#endif