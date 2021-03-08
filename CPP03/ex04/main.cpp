#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <string>

int main(void)
{
	ClapTrap unknow = ClapTrap("Unknow");

	std::cout << std::endl;
	FragTrap luke = FragTrap("Luke");
	FragTrap bob = FragTrap("Bob");
	FragTrap henry = FragTrap("Henry");

	std::cout << std::endl;
	ScavTrap will = ScavTrap("Will");
	ScavTrap paul = ScavTrap("Paul");

	std::cout << std::endl;
	NinjaTrap charles = NinjaTrap("Charles");
	NinjaTrap edouard = NinjaTrap("Edouard");

	std::cout << std::endl;
	SuperTrap theo = SuperTrap("Theo");

	std::cout << std::endl;
	luke.meleeAttack("Bob");
	bob.takeDamage(luke.get_melee_dmg());

	std::cout << std::endl;
	henry.rangedAttack("Luke");
	luke.takeDamage(henry.get_ranged_dmg());

	std::cout << std::endl;
	henry.rangedAttack("Luke");
	luke.takeDamage(henry.get_ranged_dmg());

	std::cout << std::endl;
	henry.beRepaired(500);
	luke.beRepaired(5);

	std::cout << std::endl;
	bob.vaulthunter_dot_exe("Luke");
	luke.takeDamage(henry.get_vault_damage());

	std::cout << std::endl;
	bob.vaulthunter_dot_exe("Luke");
	luke.takeDamage(henry.get_vault_damage());

	std::cout << std::endl;
	bob.vaulthunter_dot_exe("Henry");
	henry.takeDamage(henry.get_vault_damage());

	std::cout << std::endl;
	bob.vaulthunter_dot_exe("Henry");
	henry.takeDamage(henry.get_vault_damage());

	std::cout << std::endl;
	bob.vaulthunter_dot_exe("Henry");

	std::cout << std::endl;
	luke.vaulthunter_dot_exe("Henry");
	henry.takeDamage(luke.get_vault_damage());

	std::cout << std::endl;
	henry.meleeAttack("Luke");

	std::cout << std::endl;
	henry.beRepaired(50);

	std::cout << std::endl;
	henry.meleeAttack("Luke");
	luke.takeDamage(henry.get_melee_dmg());

	std::cout << std::endl;
	will.challengeNewcomer("Henry");

	std::cout << std::endl;
	henry.rangedAttack("Will");
	will.takeDamage(henry.get_ranged_dmg());

	std::cout << std::endl;
	paul.challengeNewcomer("Will");

	std::cout << std::endl;
	will.meleeAttack("Paul");
	paul.takeDamage(will.get_melee_dmg());

	std::cout << std::endl;
	charles.ninjaShoeBox(unknow);

	std::cout << std::endl;
	charles.ninjaShoeBox(luke);

	std::cout << std::endl;
	charles.ninjaShoeBox(will);

	std::cout << std::endl;
	charles.ninjaShoeBox(edouard);

	std::cout << std::endl;
	theo.meleeAttack("Charles");
	charles.takeDamage(theo.get_melee_dmg());

	std::cout << std::endl;
	theo.rangedAttack("Charles");
	charles.takeDamage(theo.get_ranged_dmg());

	std::cout << std::endl;
	theo.ninjaShoeBox(charles);

	std::cout << std::endl;
	theo.vaulthunter_dot_exe("Charles");
	charles.takeDamage(theo.get_vault_damage());

	std::cout << std::endl;
	return 0;
}