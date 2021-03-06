#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		Weapon(std::string);
		~Weapon(void);
		const Weapon &operator=(const Weapon&);
		const std::string &getType(void);
		void setType(std::string);
	private:
		std::string type;
};
#endif