#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat BureaucratLow("Fedor", 100);
	Bureaucrat BureaucratHigh("Ivan", 50);
	Form FormA("FormA", false, 1, 55);

	BureaucratLow.signForm(FormA);
	BureaucratHigh.signForm(FormA);
}