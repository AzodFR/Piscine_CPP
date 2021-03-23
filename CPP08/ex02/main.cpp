#include "mutantstack.hpp"

#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5); // 5
	mstack.push(17); // 5 17
	std::cout << mstack.top() << std::endl;

	mstack.pop(); // 5
	std::cout << mstack.size() << std::endl;

	mstack.push(3); // 5 3
	mstack.push(5); // 5 3 5
	mstack.push(737); // 5 3 5 737
	mstack.push(0); // 5 3 5 737 0


	std::cout << "Normal iteration" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::cout << "Reverse iteration" << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;

	while(rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "Size of  mutant: " << mstack.size() << std::endl;

	std::stack<int> s(mstack);
	std::cout << "Size of real std::stack copied from mutant: " << s.size() << std::endl;
	return 0;
}