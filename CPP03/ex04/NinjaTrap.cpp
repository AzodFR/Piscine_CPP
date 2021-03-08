#include "NinjaTrap.hpp"

std::string NinjaTrap::get_color(int amount)
{
	if (amount < 33)
		return ("\e[91m");
	else if (amount < 66)
		return ("\e[93m");
	return ("\e[92m");
}

NinjaTrap::NinjaTrap(std::string const & _name) : ClapTrap(_name)
{
	std::string welcome[] = {
	"*SHHT* They don't need to know that i'm here",
	"*SNIF* What is that smell ???",
	"Why does all these people are also masked ?"};
	this->set_name(_name);
	srand(time(0) * _name.length() + rand() * (_name.length() - 1));
	this->set_hp(60);
	this->set_max_hp(60);
	this->set_energy(120);
	this->set_max_energy(120);
	this->set_level(1);
	this->set_melee_dmg(60);
	this->set_ranged_dmg(5);
	this->set_armor(0);
	std::cout << "[\e[92m" << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
	<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
	<< "[\e[92m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << welcome[rand() % 3] << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::string die[] = {
	"shit shit shit shiiiiit !",
    "Is it mandatory to doing this?",
    "Got to go !"
	};
	srand(time(0) * this->get_name().length() + rand() * (this->get_name().length() - 1));
	std::cout << "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << die[rand() % 3] << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
		"WATCHOUT !",
		"SURPRISE!",
		"KATANED!",
		"HEYAAA!"
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

void NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->get_hp() > 0)
	{
		std::string attacks[] = {
		"SHUUUUU-RIIII-KEEEEEEEEEEN!",
		"Started from the bush now we here",
		"Behind ya !"
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

void NinjaTrap::ninjaShoeBox(ClapTrap &target)
{
	if (this->get_hp() > 0)
	{
		std::string quotes[] = {
			"Clap Clap Clap in your face!",
			"Take that shoe in your a**!"
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
		std::cout << "NINJAGO <\e[92m" << this->get_name() << "\e[0m> \e[93msurprise \e[0m<\e[91m" << target.get_name() << "\e[0m>" << std::endl;
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << quotes[rand() % 2] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void NinjaTrap::ninjaShoeBox(ScavTrap &target)
{
	if (this->get_hp() > 0)
	{
		std::string quotes[] = {
			"*take his right shoe* && *throw it*!",
			"Can you resist to that smell ?"
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
		std::cout << "NINJAGO <\e[92m" << this->get_name() << "\e[0m> \e[93msurprise \e[0m<\e[91m" << target.get_name() << "\e[0m>" << std::endl;
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << quotes[rand() % 2] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void NinjaTrap::ninjaShoeBox(FragTrap &target)
{
	if (this->get_hp() > 0)
	{
		std::string quotes[] = {
			"F*ck I don't have shoes anymore... *Throw the box*",
			"I will put your head int the boooooox !"
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
		std::cout << "NINJAGO <\e[92m" << this->get_name() << "\e[0m> \e[93msurprise \e[0m<\e[91m" << target.get_name() << "\e[0m>" << std::endl;
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << quotes[rand() % 2] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}

void NinjaTrap::ninjaShoeBox(NinjaTrap &target)
{
	if (this->get_hp() > 0)
	{
		std::string quotes[] = {
			"I KNOW ALL YOUR SECRET ! TAAKE THAT BACK ATTACK",
			"Sorry mate..."
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
		std::cout << "NINJAGO <\e[92m" << this->get_name() << "\e[0m> \e[93msurprise \e[0m<\e[91m" << target.get_name() << "\e[0m>" << std::endl;
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m " << quotes[rand() % 2] << std::endl;
	}
	else
	{
		std::cout << "[" << get_color(this->get_hp()) << this->get_hp() << "\e[0m/\e[92m" << this->get_max_hp() << "\e[0m]"
		<< "[\e[94m" << this->get_energy() << "\e[0m/\e[94m" << this->get_max_energy() << "\e[0m]"
		<< "[\e[91m" << this->get_name() << "\e[0m] \e[90m>>\e[0m F*** ! I am \e[91mdead\e[0m!" << std::endl;
	}
}