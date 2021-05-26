#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int damage, int apcost)
{
	this->_name = name;
	this->_damage = damage;
	this->_apcost = apcost;
}

AWeapon &AWeapon::operator=(const AWeapon &aweapon)
{
	this->_name = aweapon.getName();
	this->_damage = aweapon.getDamage();
	this->_apcost = aweapon.getAPCost();
	return (*this);
}

std::string const AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}

AWeapon::~AWeapon()
{

}