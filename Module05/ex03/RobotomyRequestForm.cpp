#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("RobotomyRequest", target, 5, 25) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform)
 : Form(presidentialpardonform) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform) 
{
	if (this == &presidentialpardonform)
		return (*this);
	Form::operator=(presidentialpardonform);
	return (*this);
}

void PresidentialPardonForm::executing(std::string const &target) const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::check()
{
	std::cout << this->getName() << this->getGradeExec() << this->getGradeSign() << std::endl;
}