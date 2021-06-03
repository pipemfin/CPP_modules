#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", target, 45, 72) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform)
 : Form(robotomyrequestform) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform) 
{
	if (this == &robotomyrequestform)
		return (*this);
	Form::operator=(robotomyrequestform);
	return (*this);
}

void RobotomyRequestForm::executing(std::string const &target) const
{
	srand(time(0));
	std::cout << "*Some drilling noizes*" << std::endl;
	std::cout << "*VJJJJJJJJJJJJJJJJJJJ*" << std::endl;
	if (rand()%2 == 0)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomized failure." << std::endl;
}

void RobotomyRequestForm::check()
{
	std::cout << this->getName() << this->getGradeExec() << this->getGradeSign() << std::endl;
}