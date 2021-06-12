#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberycreationform);
		virtual ~ShrubberyCreationForm() {};

		void check();
		virtual void executing(std::string const &target) const;
};

#endif