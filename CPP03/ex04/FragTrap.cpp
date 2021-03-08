#include "FragTrap.hpp"

std::string FragTrap::get_color(int amount)
{
	if (amount < 33)
		return ("\e[91m");
	else if (amount < 66)
		return ("\e[93m");
	return ("\e[92m");
}

FragTrap::FragTrap(std::string const & _name) : ClapTrap(_name)
{
	std::string welcome[] = {
	"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
	"Sooooo... how are things?",
	"Hey, best friend!"};
	this->set_name(_name);
	srand(time(0) * _name.length() + rand() * (_name.length() - 1));
	this->set_hp(100);
	this->set_max_hp(100);
	this->set_energy(100);
	this->set_max_energy(100);
	this->set_level(1);
	this->set_melee_dmg(30);
	this->set_ranged_dmg(20);
	this->set_armor(5);
	std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
	<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
	<< "[\e[92m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << welcome[rand() % 3] << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::string die[] = {
	"Why do I even feel pain?!",
    "Why did they build me out of galvanized flesh?!",
    "Ow hohoho, that hurts! Yipes!",
    "My robotic flesh! AAHH!",
    "Yikes! Ohhoho!",
    "Woah! Oh! Jeez!",
    "If only my chassis... weren't made of recycled human body parts! Wahahaha!"};
	srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
	std::cout << "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << die[rand() % 7] << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
		"Hyah!",
		"Heyyah!",
		"Take that!",
		"Bop!"
		};
		srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
		std::cout << "FR4G-TP <\e[92m" << this->get_name() << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->get_melee_dmg() << "\e[0m damages !" << std::endl;
		std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void FragTrap::rangedAttack(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
		"Kill, reload! Kill, reload! KILL! RELOAD!",
		"Laaasers!",
		"Oh god I can't stop!",
		"WOW! I hit 'em!"
		};
		srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
		std::cout << "FR4G-TP <\e[92m" << this->get_name() << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->get_ranged_dmg() << "\e[0m damages !" << std::endl;
		std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
			"Push this button, flip this dongle, voila! Help me!",
			"Resequencing combat protocols!",
			"Look out everybody, things are about to get awesome!",
			"F to the R to the 4 to the G to the WHAAT!",
			"You can't just program this level of excitement!"
		};
		if (this->get_energy() < 25)
		{
			std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
			<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
			<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! Not enough \e[93menergy\e[0m!" << std::endl;
			return ;
		}
		this->set_energy(this->get_energy() - 25);
		srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
		std::cout << "FR4G-TP <\e[92m" << this->get_name() << "\e[0m> \e[93mLAUNCH A SUPER ATTACK ON \e[0m<\e[91m" << target << "\e[0m> and affect \e[93m" << (this->get_level() + 1) * this->get_ranged_dmg() << "\e[0m damages !" << std::endl;
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}