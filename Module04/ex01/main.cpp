#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "AlienBlaster.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Ghoul.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

int main()
{
	AWeapon* blaster = new AlienBlaster();
	AWeapon* fist = new PowerFist();
	Character* me = new Character("Artur");
	me->equip(fist);
	std::cout << *me;
	std::cout << "What an interesting cave?";
	std::cout << "I need to search her, there might be interesting weapons" << std::endl;
	std::cout << "* Entered in a cave *" << std::endl;
	Enemy* a = new RadScorpion();
	std::cout << "Me: Ha-ha, only small radscorpion" << std::endl;
	me->attack(a);
	me->attack(a);
	std::cout << *me;
	std::cout << "Me: Ha-ha, it was easy" << std::endl;
	std::cout << "Me: Yep, i find new alienblaster, it's very powerfull" << std::endl;
	me->equip(blaster);
	std::cout << *me;
	Enemy* b = new Ghoul;
	Enemy* c = new Ghoul;
	std::cout << "Me: With this gun i easy kill these ghouls!!" << std::endl;
	me->attack(b);
	me->attack(c);
	std::cout << "Me: Ok, now i just go home and rest!" << std::endl;
	return (0);
}