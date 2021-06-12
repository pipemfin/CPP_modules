#include "Intern.hpp"

Form *getRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *getPardoned(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *getShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern()
{
	_form_names[0] = "robotomy request";
	_form_names[1] = "shrubbery creation request";
	_form_names[2] = "presidental pardon request";
	_forms[0] = &getRobotomy;
	_forms[1] = &getShrubbery;
	_forms[2] = &getPardoned;
}

Intern::Intern(const Intern &intern) {(void)intern;}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	for (int i = 0; i < 3; ++i)
		if (this->_form_names[i] == form_name)
		{
			std::cout << "Intern creates " << this->_form_names[i] << std::endl;
			return ((this->_forms[i])(target));
		}
	std::cout << "Error, intern dont know this type of form!" << std::endl;
	return (NULL);
}