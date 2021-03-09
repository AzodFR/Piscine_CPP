#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	private:
		std::string const &_type;
		std::string const &_name;
		int	_hp;
	public:
		Enemy(std::string const & , int, std::string const &);
		Enemy(const Enemy&);
		Enemy &operator=(const Enemy&);
		virtual ~Enemy();
		std::string const &getType() const { return _type; };
		std::string const &getName() const { return _name; };
		int getHP() const { return _hp; };
		virtual void takeDamage(int);
};
#endif
