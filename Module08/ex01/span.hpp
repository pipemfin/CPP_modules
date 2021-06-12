#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <string>
#include <vector>

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_size;
		Span();
	public:
		Span(unsigned int);
		Span &operator=(const Span &span);
		Span(const Span &span);
		~Span();

		void	addNumber(int N);
		void	addNumber(int N, unsigned int range);
		int		shortestSpan();
		int		longestSpan();

		class SpanException : public std::exception
		{
			private:
				std::string _error;
			public:
				SpanException(std::string error);
				const char* what() const throw();
				virtual ~SpanException() throw() {};
		};
};

#endif