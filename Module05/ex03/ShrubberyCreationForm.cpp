#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", target, 137, 145) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform)
 : Form(shrubberycreationform) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberycreationform) 
{
	if (this == &shrubberycreationform)
		return (*this);
	Form::operator=(shrubberycreationform);
	return (*this);
}

void ShrubberyCreationForm::executing(std::string const &target) const
{
	std::string filename = target + "_shrubbery";
	std::ofstream outf(filename);
	if (!outf)
	{
		std::cerr << "Error, cant open file " << filename << std::endl;
		return ;
	}
	outf << "    oxoxoo    ooxoo" << std::endl;
	outf << "  ooxoxo oo  oxoxooo" << std::endl;
	outf << " oooo xxoxoo ooo ooox" << std::endl;
	outf << " oxo o oxoxo  xoxxoxo" << std::endl;
	outf << "  oxo xooxoooo o ooo" << std::endl;
	outf << "    ooo\\oo\\  /o/o" << std::endl;
	outf << "        \\  \\/ /" << std::endl;
	outf << "         |   /" << std::endl;
	outf << "         |   /" << std::endl;
	outf << "         |   /" << std::endl;
	outf << "  ______/____\\____" << std::endl;
}

void ShrubberyCreationForm::check()
{
	std::cout << this->getName() << this->getGradeExec() << this->getGradeSign() << std::endl;
}