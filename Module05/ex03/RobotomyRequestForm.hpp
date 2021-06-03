#ifndef ROBOTOMYCREATIONFORM_HPP
#define ROBOTOMYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyrequestform);
		virtual ~RobotomyRequestForm() {};

		void check();
		virtual void executing(std::string const &target) const;
};

#endif