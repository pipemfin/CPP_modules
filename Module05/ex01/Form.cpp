#include "Form.hpp"

Form::Form(std::string name, bool sign, int grade_to_execute, int grade_to_sign)
{
	this->_name = name;
	this->_signed = sign;
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooHighException("GradeTooHighException");
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooLowException("GradeTooLowException");
	this->_grade_to_execute = grade_to_execute;
	this->_grade_to_sign = grade_to_sign;
}

Form::Form(const Form &form)
{
	this->_name = getName();
	this->_signed = form.getSign();
	this->_grade_to_execute = form.getGradeExec();
	this->_grade_to_sign = form.getGradeSign();
}

Form &Form::operator=(const Form &form)
{
	if (this == &form)
		return (*this);
	this->_name = getName();
	this->_signed = form.getSign();
	this->_grade_to_execute = form.getGradeExec();
	this->_grade_to_sign = form.getGradeSign();
	return (*this);
}

Form::~Form(){}

std::string Form::getName() const { return (this->_name);}

bool Form::getSign() const {	return (this->_signed);}

int Form::getGradeSign() const {	return (this->_grade_to_sign);}

int Form::getGradeExec() const {	return (this->_grade_to_execute);}

std::string Form::getTarget() const {	return (this->_target);}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_to_sign)
		this->_signed = true;
	else
		throw GradeTooLowException("GradeTooLow");
}

Form::GradeTooHighException::GradeTooHighException(std::string _error)
{
	this->_error = _error;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}

Form::GradeTooLowException::GradeTooLowException(std::string _error)
{
	this->_error = _error;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "This is ";
	out << form.getName();
	out << " form. Grade to sign ";
	out << form.getGradeSign();
	out << ". Grade to execute ";
	out << form.getGradeExec();
	if (form.getSign() == true)
		out << ". Already signed." << std::endl;
	else
		out << ". Need to sign." << std::endl;
	return (out);
}