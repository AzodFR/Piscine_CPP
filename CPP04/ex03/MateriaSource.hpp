#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_knowed[4];
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &);
};
#endif