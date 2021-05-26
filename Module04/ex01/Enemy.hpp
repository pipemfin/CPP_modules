#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
	private:
		unsigned int	_hp;
		std::string		_type;
		Enemy();

	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &enemy);
		Enemy& operator=(const Enemy &enemy);
		virtual ~Enemy();

		std::string const getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif