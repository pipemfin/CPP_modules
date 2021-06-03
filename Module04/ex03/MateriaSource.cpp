#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_source = NULL;
	this->_count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
		this->_source = new AMateria*[materiasource.getCount()];
		this->_count = materiasource.getCount();
		for (int i = 0; i < this->_count; ++i)
			this->_source[i] = materiasource.getMateria(i);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource)
{
	if (this == &materiasource)
		return (*this);
	for (int i = 0; i < this->_count; ++i)
		delete this->_source[i];
	if (this->_count != 0)
		delete[] this->_source;
	this->_source = new AMateria*[materiasource.getCount()];
	this->_count = materiasource.getCount();
	for (int i = 0; i < this->_count; ++i)
		this->_source[i] = materiasource.getMateria(i);
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	AMateria **copy_array;

	if (this->_source == NULL)
	{
		this->_source = new AMateria*[1];
		this->_source[0] = materia;
		this->_count = 1;
	}
	else
	{
		for (int i = 0; i < this->_count; ++i)
			if (this->_source[i]->getType() == materia->getType())
				return ;
		copy_array = new AMateria*[this->_count + 1];
		for (int i = 0; i < this->_count; ++i)
			copy_array[i] = this->_source[i];
		this->_count += 1;
		copy_array[this->_count - 1] = materia;
		delete[] this->_source;
		this->_source = copy_array;
	}
}

int MateriaSource::getCount() const
{
	return (this->_count);
}

AMateria *MateriaSource::getMateria(unsigned int number) const
{
	if ((int)number < this->_count)
		return (this->_source[number]);
	return (NULL);
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_count; ++i)
		if (this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_count; ++i)
		delete this->_source[i];
	if (this->_count > 0)
		delete[] this->_source;
}