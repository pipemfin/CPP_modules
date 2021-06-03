#include "Bureaucrat.hpp"


Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	this->_error = error;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return _error.c_str(); }

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	this->_error = error;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() { return _error.c_str(); }

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	this->_name = bureaucrat.getName();
	this->_grade = bureaucrat.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this == &bureaucrat)
		return (*this);
	this->_name = bureaucrat.getName();
	this->_grade = bureaucrat.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	if (grade > 150)
		throw GradeTooLowException("GradeTooLowException");
	if (grade < 1)
		throw GradeTooHighException("GradeTooHighException");
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::upGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException("GradeTooHighException");
	this->_grade -= 1;
}

void Bureaucrat::downGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException("GradeTooLowException");
	this->_grade += 1;
}

std::string Bureaucrat::getName() const  {return (this->_name);}

int         Bureaucrat::getGrade() const { return (this->_grade);}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signs " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " execute " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName();
	out << ", bureaucrat grade ";
	out << bureaucrat.getGrade();
	return (out);
}