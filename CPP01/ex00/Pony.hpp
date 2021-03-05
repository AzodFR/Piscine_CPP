#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony {

	public:
		Pony(std::string name, int legs, std::string color);
		~Pony(void);
		void run(void);
	private:
		std::string name;
		std::string color;
		int legs;
};
#endif