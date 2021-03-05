#include <iostream>
#include <string>

void memoryLeak()
{
	std::string *panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
int main (void)
{
	memoryLeak();
	while (1);
	return (0);
}