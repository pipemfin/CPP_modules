#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &assaultterminator);
		AssaultTerminator &operator=(const AssaultTerminator &assaultterminator);
		AssaultTerminator	*clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		~AssaultTerminator();
};

#endif