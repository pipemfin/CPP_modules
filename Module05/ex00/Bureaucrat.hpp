#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>


class Bureaucrat
{
	private:
		std::string			_name;
		int					_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		void upGrade();
		void downGrade();
		std::string	getName() const;
		int			getGrade() const;

		class GradeTooHighException : public std::exception
		{
			private:
				std::string _error;
			public:
				GradeTooHighException(std::string error);
				const char* what() const throw();
				virtual ~GradeTooHighException() throw();
		};

		class GradeTooLowException : public std::exception
		{
			private:
				std::string _error;
			public:
				GradeTooLowException(std::string error);
				const char* what() const throw();
				virtual ~GradeTooLowException() throw();
		};
};
		std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif