#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat BureaucratLow("Fedor", 100);
	Bureaucrat BureaucratHigh("Ivan", 50);
	Form FormA("FormA", 1, 55);

	std::cout << FormA << std::endl;
	BureaucratLow.signForm(FormA);
	BureaucratHigh.signForm(FormA);
	std::cout << FormA << std::endl;
}