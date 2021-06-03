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

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	if (grade > 150)
		throw GradeTooLowException("GradeTooLowException");
	if (grade < 1)
		throw GradeTooHighException("GradeTooHighException");
	this->_name = name;
	this->_grade = grade;
}

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName();
	out << ", bureaucrat grade ";
	out << bureaucrat.getGrade();
	return (out);
}