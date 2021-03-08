#include "ScavTrap.hpp"

std::string ScavTrap::get_color(int amount)
{
	if (amount < 33)
		return ("\e[91m");
	else if (amount < 66)
		return ("\e[93m");
	return ("\e[92m");
}

ScavTrap::ScavTrap(std::string const & _name) : ClapTrap(_name)
{
	std::string welcome[] = {
	"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
	"Sooooo... how are things?",
	"Hey, best friend!"};
	this->set_name(_name);
	srand(time(0) * _name.length() + rand() * (_name.length() - 1));
	this->set_hp(100);
	this->set_max_hp(100);
	this->set_energy(50);
	this->set_max_energy(50);
	this->set_level(1);
	this->set_melee_dmg(20);
	this->set_ranged_dmg(15);
	this->set_armor(3);
	std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
	<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
	<< "[\e[92m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << welcome[rand() % 3] << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::string die[] = {
	"NOOOOOOOOOOO !",
    "I need to go out..",
    "Shit my mom call me !",
    "See ya!"
	};
	srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
	std::cout << "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << die[rand() % 4] << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
		"Shling !",
		"Zbrrreh!",
		"POOM!",
		"PAF!"
		};
		srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
		std::cout << "SCOVID <\e[92m" << this->get_name() << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->get_melee_dmg() << "\e[0m damages !" << std::endl;
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

void ScavTrap::rangedAttack(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
		"360 no scope!",
		"ohhh baby it's a triple!",
		"HEADSHOT!"
		};
		srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
		std::cout << "SCOVID <\e[92m" << this->get_name() << "\e[0m]> attacks <\e[91m" << target << "\e[0m> and affect \e[93m" << this->get_ranged_dmg() << "\e[0m damages !" << std::endl;
		std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << attacks[rand() % 3] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string challenge[] = {
			"You versus me! Me versus you! Either way!",
			"I will prove to you my robotic superiority!",
			"Dance battle! Or, you know... regular battle.",
			"Man versus machine! Very tiny streamlined machine!",
			"Care to have a friendly duel?"
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
		std::cout << "SCOVID <\e[92m" << this->get_name() << "\e[0m> \e[93mgive a challenge to \e[0m<\e[91m" << target << "\e[0m>" << std::endl;
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << challenge[rand() % 4] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}