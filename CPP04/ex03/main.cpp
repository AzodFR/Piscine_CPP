#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
int main()
{
	IMateriaSource* src = new MateriaSource();
	

	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//std::cout << tmp->getType() << std::endl;
	tmp = src->createMateria("cure");
	//std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}