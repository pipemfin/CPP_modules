#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	this->_name = "Nameless";
	this->_name = "Titulless";
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	this->_name = sorcerer.getName();
	this->_name = sorcerer.getTitle();
}

Sorcerer& Sorcerer::operator=(const Sorcerer &sorcerer)
{
	if (this == &sorcerer)
		return (*this);
	this->_name = sorcerer.getName();
	this->_title = sorcerer.getTitle();
	return (*this);
}

std::string Sorcerer::getName() const
{
	return (this->_name);
}

std::string Sorcerer::getTitle() const
{
	return (this->_title);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &sorcerer)
{
	out << "I am ";
	out << sorcerer.getName();
	out << ", ";
	out << sorcerer.getTitle();
	out << ", and I like ponies!";
	out << std::endl;
	return (out);
}