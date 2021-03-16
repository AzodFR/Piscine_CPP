#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	private:
		std::string _type;
		int	_hp;
		Enemy();
	public:
		Enemy(std::string const & , int);
		Enemy(const Enemy&);
		Enemy &operator=(const Enemy&);
		virtual ~Enemy() {return;};
		std::string const &getType() const { return _type; };
		int getHP() const { return _hp; };
		virtual void takeDamage(int);
};
#endif
