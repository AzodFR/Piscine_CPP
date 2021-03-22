#include <iostream>

class Base
{
	public :
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


Base * generate(void)
{
	static int i = 0;

	srand(time(0) + i++);
	int r = rand() % 3;
	std::cout << r;
	if (r == 0)
		return new A;
	else if (r == 1)
		return new B;
	else
		return new C;
}

void identify_from_pointer(Base * p)
{
	if (!dynamic_cast<A *>(p))
	{
		if (!dynamic_cast<B *>(p))
		{
			if(!dynamic_cast<C *>(p))
			{
				std::cerr << "Error of cast !";
			}
			else
				std::cout << "C";
		}
		else
			std::cout << "B";
	}
	else
		std::cout << "A";

}

void identify_from_reference(Base & p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A";
		(void) a;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			std::cout << "B";
			(void) b;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				std::cout << "C";
				(void) c;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what();
			}
		}
	}
}

int main(void)
{
	Base *p;

	std::cout << "0: A // 1: B // 2: C" << std::endl << std::endl;
	std::cout << "+---+---+---+" << std::endl;
	std::cout << "| N | R | P |" << std::endl;
	std::cout << "+---+---+---+" << std::endl;
	for (int i = 0; i < 10 ; i++)
	{
		std::cout << "| ";
		p = generate();
		std::cout << " | ";
		identify_from_reference(*p);
		std::cout << " | ";
		identify_from_pointer(p);
		std::cout << " |" << std::endl;
		std::cout << "+---+---+---+" << std::endl;
		delete p;
	}
}