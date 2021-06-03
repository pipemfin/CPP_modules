#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class  PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialpardonform);
		virtual ~PresidentialPardonForm() {};

		void check();
		virtual void executing(std::string const &target) const;
};

#endif