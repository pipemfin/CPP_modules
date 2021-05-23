#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &sorcerer);
	Sorcerer& operator=(const Sorcerer &sorcerer);
	std::string getName() const;
	std::string getTitle() const;
	~Sorcerer();
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif