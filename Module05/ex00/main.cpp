#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat BureaucratLow("Fedor", 150);
	Bureaucrat BureaucratHigh("Ivan", 1);
	try
	{
		Bureaucrat("Lalka", 151);
		BureaucratLow.downGrade();
		BureaucratHigh.upGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}