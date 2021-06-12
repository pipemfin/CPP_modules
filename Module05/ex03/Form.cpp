#include "Form.hpp"

Form::Form(std::string name, std::string target, int grade_to_sign, int grade_to_execute)
: _name(name), _grade_to_execute(grade_to_execute), _grade_to_sign(grade_to_sign)
{
	this->_target = target;
	this->_signed = false;
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooHighException("GradeTooHighException");
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooLowException("GradeTooLowException");
}

Form::Form(const Form &form)
: _name(form.getName()), _grade_to_execute(form.getGradeExec()), _grade_to_sign(form.getGradeSign())
{
	this->_target = form.getTarget();
	this->_signed = form.getSign();
}

Form &Form::operator=(const Form &form)
{
	if (this == &form)
		return (*this);
	this->_target = form.getTarget();
	this->_signed = form.getSign();
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
	if (bureaucrat.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw GradeTooLowException("grade too low");
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw DontSignedForm("form didnt signed");
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException("grade too low");
	executing(this->getTarget());
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

Form::DontSignedForm::DontSignedForm(std::string _error)
{
	this->_error = _error;
}

const char *Form::DontSignedForm::what() const throw()
{
	return (_error.c_str());
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "This is " << form.getName() << " form. Grade to sign ";
	out << form.getGradeSign() << ". Grade to execute " << form.getGradeExec();
	if (form.getSign() == true)
		out << ". Already signed.";
	else
		out << ". Need to sign.";
	return (out);
}