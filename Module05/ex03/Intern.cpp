#include "Intern.hpp"

Intern::Intern(const Intern &intern) {(void)intern;}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

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

Form *Intern::makeForm(std::string form_name, std::string target)
{
	std::string form_names[3] = 
	{"robotomy request", "shrubbery creation request", "presidental pardon request"};
	Form *(*forms[3])(std::string target) = {&getRobotomy, &getShrubbery, &getPardoned};
	for (int i = 0; i < 3; ++i)
		if (form_names[i] == form_name)
		{
			std::cout << "Intern creates " << form_names[i] << std::endl;
			return ((forms[i])(target));
		}
	std::cout << "Error, intern dont know this type of form!" << std::endl;
	return (NULL);
}