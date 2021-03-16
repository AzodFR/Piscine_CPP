#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
int main()
{
	IMateriaSource* src = new MateriaSource();
	

	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	Character* me = new Character("me");
	
	AMateria* tmp;
	AMateria* tmp_clone;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	//std::cout << tmp->getType() << std::endl;
	tmp = src->createMateria("cure");
	//std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	Character* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(1, *bob);

	std::cout << "Curse's xp: " << tmp->getXP() << std::endl;

	tmp_clone = tmp->clone();
	me->equip(tmp_clone);
	std::cout << "Curse clone's xp: " << tmp_clone->getXP() << std::endl;
	
	me->use(2, *bob);
	std::cout << "Curse clone's xp: " << tmp_clone->getXP() << std::endl;
	Character *you = new Character(*me);
	you->use(2, *bob);
	std::cout << "Curse clone's xp after you: " << tmp_clone->getXP() << std::endl;
	me->use(2, *bob);
	std::cout << "Curse clone's xp after me (didn't have the item anymore): " << tmp_clone->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "me can't use 0" << std::endl;
	you->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	delete you;
	return 0;
}