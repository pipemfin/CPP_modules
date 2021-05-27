#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"


void space_carnage()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* iakob = new TacticalMarine;
	ISpaceMarine* homer = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad *alfa = new Squad;
	alfa->push(bob);
	alfa->push(iakob);
	alfa->push(homer);
	alfa->push(jim);
	for (int i = 0; i < alfa->getCount(); ++i)
	{
		ISpaceMarine* cur = alfa->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	Squad *beta = new Squad;
	*beta = *alfa;
	std::cout << alfa->getCount() << std::endl;
	std::cout << beta->getCount() << std::endl;
	Squad *zeta = new Squad(*beta);
	std::cout << zeta->getCount() << std::endl;
	delete alfa;
	delete zeta;
	delete beta;
}

int main()
{
	space_carnage();
	while (1)
		continue;
	return (0);
}