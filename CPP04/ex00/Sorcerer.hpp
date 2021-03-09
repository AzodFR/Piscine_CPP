#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"
# include "Knight.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer(void);
	public:
		Sorcerer(std::string const &, std::string const &);
		Sorcerer &operator=(Sorcerer&);
		Sorcerer(Sorcerer &);
		~Sorcerer(void);
		std::string &getName() {return _name;}
		void setName(std::string &name) {_name = name;}
		std::string &getTitle() {return _title;}
		void setTitle(std::string &title) {_title = title;}
		void polymorph(Victim const &) const;
		void polymorph(Peon const &) const;
		void polymorph(Knight const &) const;
};

std::ostream &operator<<(std::ostream &, Sorcerer&);
#endif