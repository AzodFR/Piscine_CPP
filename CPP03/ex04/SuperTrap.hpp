#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "SuperTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap(std::string const &);
        virtual ~SuperTrap(void);
        void rangedAttack(std::string const &);
        void meleeAttack(std::string const &);
};
#endif