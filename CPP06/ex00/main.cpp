#include <iostream>
#include <string>
#include <iomanip>

int get_prec(std::string text)
{
	int i;
	for(i = 0; text[i] && std::isdigit(text[i]); i++)
		;
	if (text[i + 1])
		return (++i);
	return (--i);
}

void to_char(long double a, std::string text)
{
	std::cout << "char: ";
	if (text == "nan" || text == "nanf" || text == "-inf" || text == "-inff" ||text == "+inf" || text == "+inff" || text == "inf" || text == "inf+" || text == "inf-")
		std::cout << "impossible" << std::endl;
	else if (a > 31 && a < 127)
		std::cout << "\"" << static_cast<char>(a) << "\"" << std::endl;
	else
		std::cout << "Non displayable"  << std::endl;
}

void to_int(long double a, std::string text)
{


	std::cout << "int: ";
	if (text == "nan" || text == "nanf" || text == "-inf" || text == "-inff" ||text == "+inf" || text == "+inff" || text == "inf" || text == "inf+" || text == "inf-")
		std::cout << "impossible"<< std::endl;
	else
		std::cout << static_cast<int>(a) << std::endl;
}

void to_float(long double a, std::string text)
{
	std::cout << "float: ";
	if (text == "nan" || text == "nanf")
		std::cout << "nanf" << std::endl;
	else if (text == "-inf" || text == "-inff")
		std::cout << "-inff" << std::endl;
	else if (text == "+inf" || text == "+inff")
		std::cout << "+inff" << std::endl;
	else
		std::cout<< std::fixed << std::setprecision(text.length() - get_prec(text)) << static_cast<float>(a) << "f" <<  std::endl;
}

void to_double(long double a, std::string text)
{
	std::cout << "double: ";
	if (text == "nan" || text == "nanf")
		std::cout << "nan" << std::endl;
	else if (text == "-inf" || text == "-inff")
		std::cout << "-inf" << std::endl;
	else if (text == "+inf" || text == "+inff")
		std::cout << "+inf" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(text.length() - get_prec(text)) << " " << static_cast<double>(a) << std::endl;
}

int is_all_alpha_n(char *av, int n)
{
	for (int i = 0; av[i] && i < n; i++)
	{
		if (av[i] >= '0' && av[i] <= '9')
			return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	long double arg;
	char *p;
	if (ac == 2)
	{
		
		const char* test = av[1];
		if (is_all_alpha_n(av[1], 1) && !std::strtod(test, &p))
			arg = p[0];
		else
			arg = std::atof(av[1]);
		to_char(arg, av[1]);
		to_int(arg, av[1]);
		to_float(arg, av[1]);
		to_double(arg, av[1]);
		return (0);
	}
	else
	{
		std::cout << "\e[91mPlease provide one and only one argument\e[0m" << std::endl;
		return (1);
	}
}
