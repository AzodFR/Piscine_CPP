#ifndef VICTIME_HPP
#define VICTIME_HPP

# include <string>
# include <iostream>

class Victim
{
	protected:
		std::string _name;
		Victim();
	public:
		Victim(std::string const &);
		virtual ~Victim(void);
		Victim &operator=(Victim&);
		Victim(Victim &);
		std::string &getName() {return _name;}
		void setName(std::string &name) {_name = name;}
		void getPolymorphed(void) const;
};
std::ostream &operator<<(std::ostream &, Victim&);
#endif