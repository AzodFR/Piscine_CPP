#include "ScavTrap.hpp"

std::string ScavTrap::get_color(int amount)
{
	if (amount < 33)
		return ("\e[91m");
	else if (amount < 66)
		return ("\e[93m");
	return ("\e[92m");
}

ScavTrap::ScavTrap(std::string const & _name)
{
	std::string welcome[] = {
	"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
	"Sooooo... how are things?",
	"Hey, best friend!"};
	this->name = _name;
	srand(time(0) * _name.length() + rand() * (_name.length() - 1));
	this->hp = 100;
	this->max_hp = 100;
	this->energy = 50;
	this->max_energy = 50;
	this->level = 1;
	this->melee_dmg = 20;
	this->ranged_dmg = 15;
	this->armor = 3;
	std::cout << "[\e[92m" << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[92m" << this->name << "\e[0m] \e[90m>>\e[0m " << welcome[rand() % 3] << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::string die[] = {
	"NOOOOOOOOOOO !",
    "I need to go out..",
    "Shit my mom call me !",
    "See ya!"
	};
	srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
	std::cout << "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << die[rand() % 4] << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	if (this->hp > 0)
	{
		std::string attacks[] = {
		"Shling !",
		"Zbrrreh!",
		"POOM!",
		"PAF!"
		};
		srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
		std::cout << "SCOVID <\e[92m" << this->name << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->melee_dmg << "\e[0m damages !" << std::endl;
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

void ScavTrap::rangedAttack(std::string const & target)
{
	if (this->hp > 0)
	{
		std::string attacks[] = {
		"360 no scope!",
		"ohhh baby it's a triple!",
		"HEADSHOT!"
		};
		srand(time(0) * this->name.length() + rand() * (this->name.length() - 1));
		std::cout << "SCOVID <\e[92m" << this->name << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->ranged_dmg << "\e[0m damages !" << std::endl;
		std::cout << "[\e[92m" << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 3] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->hp -= (amount - this->armor);
	if (this->hp <= 0)
		this->hp = 0;
	std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m OUCHHHHH !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hp + (int)amount <= this->max_hp)
		this->hp += amount;
	else
		this->hp = this->max_hp;
	std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
	<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
	<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m OOHH  ! My bolts are juicy back !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->hp > 0)
	{
		std::string challenge[] = {
			"You versus me! Me versus you! Either way!",
			"I will prove to you my robotic superiority!",
			"Dance battle! Or, you know... regular battle.",
			"Man versus machine! Very tiny streamlined machine!",
			"Care to have a friendly duel?"
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
		std::cout << "SCOVID <\e[92m" << this->name << "\e[0m> \e[93mgive a challenge to \e[0m<\e[91m" << target << "\e[0m>" << std::endl;
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m " << challenge[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->hp) << this->hp << "\e[0m/\e[92m" << this->max_hp << "\e[0m]"
		<< "[\e[94m" << this->energy << "\e[0m/\e[94m" << this->max_energy << "\e[0m]"
		<< "[\e[91m" << this->name << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}