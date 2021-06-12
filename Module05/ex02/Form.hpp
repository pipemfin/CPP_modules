#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form 
{
	private:
		const std::string	_name;
		std::string			_target;
		bool				_signed;
		const int			_grade_to_execute;
		const int			_grade_to_sign;	
		Form();
	public:
		Form(std::string name, std::string target, int grade_to_execute, int grade_to_sign);
		Form(const Form &form);
		Form &operator=(const Form &form);
		virtual ~Form();

		std::string getName() const;
		bool getSign () const;
		int getGradeSign() const;
		int getGradeExec() const;
		std::string getTarget() const;
		void beSigned(Bureaucrat &bureaucrat);
		void execute(Bureaucrat const & executor) const;
		virtual void executing(std::string const &target) const = 0;

		class GradeTooHighException : public std::exception
		{
			private:
				std::string	_error;
			public:
				GradeTooHighException(std::string _error);
				virtual ~GradeTooHighException() throw() {};

				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			private:
				std::string	_error;
			public:
				GradeTooLowException(std::string _error);
				virtual ~GradeTooLowException() throw() {};

				virtual const char *what() const throw();
		};

		class DontSignedForm : public std::exception
		{
			private:
				std::string	_error;
			public:
				DontSignedForm(std::string _error);
				virtual ~DontSignedForm() throw() {};

				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif