#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine **squad;
		int last;
	public:
		Squad();
		Squad(Squad&);
		Squad &operator=(Squad&);
		int getCount();
		ISpaceMarine* getUnit(int);
		int push(ISpaceMarine*);
};
#endif