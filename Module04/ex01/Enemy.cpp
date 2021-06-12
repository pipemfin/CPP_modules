#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) 
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy &enemy)
{
	this->_hp = enemy.getHP();
	this->_type = enemy.getType();
}

Enemy& Enemy::operator=(const Enemy &enemy)
{
	if (this == &enemy)
		return (*this);
	this->_hp = enemy.getHP();
	this->_type = enemy.getType();
	return (*this);
}

std::string const Enemy::getType() const	{	return (this->_type);	}

int Enemy::getHP() const 					{	return (this->_hp);		}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;
	else if (damage < (int)this->_hp)
		this->_hp -= damage;
	else
		this->_hp = 0;
}

Enemy::~Enemy() {}