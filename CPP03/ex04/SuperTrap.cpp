#include "SuperTrap.hpp"
#include <string>

SuperTrap::SuperTrap(std::string const & _name) : ClapTrap(_name), FragTrap(_name), NinjaTrap(_name)
{
    std::string welcome[] = {
	"I FEEL SUPER GREAT TODAY !",
	"My power... INCREASE !",
	"I'm INSANE !"};
    srand(time(0) * _name.length() + rand() * (_name.length() - 1));
	this->set_hp(100);
	this->set_max_hp(100);
    this->set_energy(120);
	this->set_max_energy(120);
	this->set_level(1);
    this->set_melee_dmg(60);
    this->set_ranged_dmg(20);
	this->set_armor(5);
    std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
	<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
	<< "[\e[92m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << welcome[rand() % 3] << std::endl;
}
SuperTrap::~SuperTrap(void)
{
    std::string die[] = {
    "how... HOW THIS IS POSSIBLE ???",
    "I'm not really dead... LIAR !"
    };
    srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
	std::cout << "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << die[rand() % 2] << std::endl;
}
void SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}