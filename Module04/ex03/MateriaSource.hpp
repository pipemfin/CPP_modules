#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	**_source;
		int 		_count;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiasource);
		MateriaSource &operator=(const MateriaSource &materiasource);
		int getCount() const;
		AMateria *getMateria(unsigned int number) const;
		virtual void learnMateria(AMateria *materia);
		virtual AMateria* createMateria(std::string const & type);
		virtual ~MateriaSource();
};

#endif