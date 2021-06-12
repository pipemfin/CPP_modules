#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form* (*func)(std::string target);

class Intern 
{
	private:
		std::string _form_names[3];
		Form *(*_forms[3])(std::string target);

	public:
		Intern();
		Intern(const Intern &intern);
		Intern &operator=(const Intern &intern);
		~Intern() {};

		Form *makeForm(std::string form_name, std::string target);
};

#endif