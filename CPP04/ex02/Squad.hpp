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
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
};
#endif