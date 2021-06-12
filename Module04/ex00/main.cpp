#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "InternetTroll.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	InternetTroll ivan("Ivan");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(ivan);


	return 0;
}