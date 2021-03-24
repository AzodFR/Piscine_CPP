#include "mutantstack.hpp"

#include <iostream>

int main()
{
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


		std::cout << std::endl << "Normal iteration" << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}


		std::cout << std::endl << "Reverse iteration" << std::endl;

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();

		++rit;
		--rit;

		while(rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
		std::cout << std::endl << "Size of  mutant: " << mstack.size() << std::endl;

		std::stack<int> s(mstack);
		std::cout << "Size of real std::stack copied from mutant: " << s.size() << std::endl;
	}
	{
		MutantStack<int> mstack;
		mstack.push(5); // 5
		mstack.push(17); // 5 17
		mstack.push(25); // 5 17 25

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << std::endl;
		while(it != ite)
		{
			std::cout << *it << " + 1 = ";
			*it +=1;
			std::cout << *it << std::endl ;
			++it;
		}
		MutantStack<int>::const_iterator cit = mstack.begin();
		MutantStack<int>::const_iterator cite = mstack.end();

		std::cout << std::endl;
		while(cit != cite)
		{
			std::cout << *cit << " + 0 = ";
			//*cit += 1;
			std::cout << *cit << std::endl ;
			++cit;
		}
	}
	return 0;
}