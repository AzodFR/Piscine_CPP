#include "FragTrap.hpp"

std::string FragTrap::get_color(int amount)
{
	if (amount < 33)
		return ("\e[91m");
	else if (amount < 66)
		return ("\e[93m");
	return ("\e[92m");
}

FragTrap::FragTrap(std::string const & _name)
{
	std::string welcome[] = {
	"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
	"Sooooo... how are things?",
	"Hey, best friend!"};
	this->name = _name;
	srand(time(0) * _name.length() + rand() * (_name.length() - 1));
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 100;
	this->max_energy = 100;
	this->level = 1;
	this->melee_dmg = 30;
	this->ranged_dmg = 20;
	this->armor = 5;
	std::cout << "[\e[92m" << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[92m" << this->name << "\e[0m] \e[90m>>\e[0m " << welcome[rand() % 3] << std::endl;
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
	srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
	std::cout << "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << die[rand() % 7] << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	if (this->hp > 0)
	{
		std::string attacks[] = {
		"Hyah!",
		"Heyyah!",
		"Take that!",
		"Bop!"
		};
		srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
		std::cout << "FR4G-TP <\e[92m" << this->name << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->melee_dmg << "\e[0m damages !" << std::endl;
		std::cout << "[\e[92m" << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void FragTrap::rangedAttack(std::string const & target)
{
	if (this->hp > 0)
	{
		std::string attacks[] = {
		"Kill, reload! Kill, reload! KILL! RELOAD!",
		"Laaasers!",
		"Oh god I can't stop!",
		"WOW! I hit 'em!"
		};
		srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
		std::cout << "FR4G-TP <\e[92m" << this->name << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->ranged_dmg << "\e[0m damages !" << std::endl;
		std::cout << "[\e[92m" << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->hp -= (amount - this->armor);
	if (this->hp <= 0)
		this->hp = 0;
	std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m OUCHHHHH !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->hp + (int)amount <= this->max_hp)
		this->hp += amount;
	else
		this->hp = this->max_hp;
	std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m OOHH  ! My bolts are juicy back !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->hp > 0)
	{
		std::string attacks[] = {
			"Push this button, flip this dongle, voila! Help me!",
			"Resequencing combat protocols!",
			"Look out everybody, things are about to get awesome!",
			"F to the R to the 4 to the G to the WHAAT!",
			"You can't just program this level of excitement!"
		};
		if (this->energy < 25)
		{
			std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
			<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
			<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m F*** ! Not enough \e[93menergy\e[0m!" << std::endl;
			return ;
		}
		this->energy -= 25;
		srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
		std::cout << "FR4G-TP <\e[92m" << this->name << "\e[0m> \e[93mLAUNCH A SUPER ATTACK ON \e[0m<\e[91m" << target << "\e[0m> and affect \e[93m" << (this->level + 1) * this->ranged_dmg << "\e[0m damages !" << std::endl;
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}