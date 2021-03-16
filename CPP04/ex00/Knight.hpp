#ifndef KNIGHT_HPP
# define KNIGHT_HPP

# include "Victim.hpp"

class Knight : public Victim
{
	private:
		Knight();
	public:
		Knight(std::string const &);
		virtual ~Knight(void);
		void getPolymorphed(void) const;
};
#endif