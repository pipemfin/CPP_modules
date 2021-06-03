#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat HighLevelBureaucrat("Putin", 1);
	Intern intern;
	Form *form;

	form = intern.makeForm("robotomy request", "Navalniy");

	HighLevelBureaucrat.signForm(*form);
	HighLevelBureaucrat.executeForm(*form);

	form = intern.makeForm("shrubbery creation request", "garden");

	HighLevelBureaucrat.signForm(*form);
	HighLevelBureaucrat.executeForm(*form);

	form = intern.makeForm("presidental pardon request", "Hitler");

	HighLevelBureaucrat.signForm(*form);
	HighLevelBureaucrat.executeForm(*form);

	form = intern.makeForm("other type of form", "intern");
	if (form == NULL)
		std::cout << "error!" << std::endl;
}