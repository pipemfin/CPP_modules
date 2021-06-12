#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
	MateriaSource* incld = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	Character* you = new Character("you");
	AMateria* tmp = NULL;
	AMateria* tmp2 = NULL;
	AMateria* tmp3 = NULL;
	AMateria* tmp4 = NULL;
	tmp = src->createMateria("ice");
	tmp2 = src->createMateria("cure");
	tmp3 = src->createMateria("ice");
	tmp4 = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp2);
	me->equip(tmp3);
	me->equip(tmp4);
	*you = *me;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	you->use(0, *bob);
	you->use(1, *bob);
	you->use(2, *bob);
	you->use(3, *bob);
	me->unequip(1);
	*incld = *src;
	std::cout << tmp->getXP() << std::endl;
	delete tmp;
	tmp = incld->createMateria("cure");
	std::cout << tmp->getType() << std::endl;
	std::cout << tmp->getXP() << std::endl;
	delete bob;
	delete me;
	delete src;
	return (0);
}