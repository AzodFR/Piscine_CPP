#include "Pony.hpp"

void	ponyOnTheStack(std::string name, int legs, std::string color)
{
	Pony stack = Pony(name, legs, color);
	stack.run();
}

void	ponyOnTheHeap(std::string name, int legs, std::string color)
{
	Pony *heap = new Pony(name, legs, color);
	heap->run();
	delete heap;
}



int main(void)
{
	std::cout << std::endl << "====== STACK TEST ======" << std::endl << std::endl;
	ponyOnTheStack("Stack", 3, "White");
	std::cout << "========================" << std::endl << std::endl ;
	std::cout << "\e[2;37mWe don't need to delete a Stack allocated class, the destroy function is called automatically\e[0m" << std::endl << std::endl << std::endl;



	std::cout << "====== HEAP TEST ======" << std::endl << std::endl;
	ponyOnTheHeap("Heap", 99, "Black");
	std::cout << "======================" << std::endl << std::endl;
	std::cout << "\e[2;37mBut here, we have to delete it because he is on the heap\e[0m" << std::endl << std::endl;

	return (0);
}