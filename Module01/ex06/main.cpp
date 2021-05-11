#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	club.printType();
	bob.attack();
	club.setType("big black dildo");
	club.printType();
	bob.attack();

	club.setType("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	club.printType();
	jim.attack();
	club.setType("big black dildo");
	club.printType();
	jim.attack();

	return (0);
}