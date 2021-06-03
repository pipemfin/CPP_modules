#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat BureaucratLow("Fedor", 100);
	Bureaucrat BureaucratHigh("Ivan", 40);
	Bureaucrat HighLevelBureaucrat("Putin", 1);
	ShrubberyCreationForm FormA("Garden");
	RobotomyRequestForm FormB("Robo");
	PresidentialPardonForm FormC("Ford");

	BureaucratLow.signForm(FormA);
	BureaucratLow.executeForm(FormA);

	BureaucratLow.signForm(FormB);
	BureaucratHigh.executeForm(FormB);

	BureaucratHigh.signForm(FormB);
	BureaucratHigh.executeForm(FormB);

	HighLevelBureaucrat.signForm(FormC);
	HighLevelBureaucrat.executeForm(FormC);
}