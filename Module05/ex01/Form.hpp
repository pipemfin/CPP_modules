#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form 
{
	private:
		const std::string		_name;
		const int				_grade_to_execute;
		const int				_grade_to_sign;	
		bool					_signed;
		Form();
	public:
		Form(std::string name, int grade_to_execute, int grade_to_sign);
		Form(const Form &form);
		Form &operator=(const Form &form);
		~Form();

		std::string getName() const;
		bool getSign () const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat &bureaucrat);

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
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif