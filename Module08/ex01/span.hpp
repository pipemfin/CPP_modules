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
		unsigned int		_largest;
		unsigned int		_prelargest;
		unsigned int		_smallest;
		Span();
	public:
		Span(unsigned int);
		~Span();

		void	addNumber(unsigned int N);
		void	addNumber(unsigned int N, unsigned int range);
		int		shortestSpan();
		int		longestSpan();

		class SpanException : std::exception
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