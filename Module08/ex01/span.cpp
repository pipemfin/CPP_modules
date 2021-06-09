#include "span.hpp"

Span::Span(unsigned int size)
{
	this->_smallest = INT_MAX;
	this->_largest = 0;
	this->_size = size;
}

void Span::addNumber(unsigned int N)
{
	if (this->_array.size() < this->_size)
	{
		this->_array.push_back(N);
		if (this->_largest < N)
			this->_largest = N;
		if (this->_smallest > N)
			this->_smallest = N;
	}
	else
		throw SpanException("span is full");
}

void Span::addNumber(unsigned int N, unsigned int range)
{
	int start = this->_array.size() > 0 ? this->_array.size() - 1 : 0;
	int end = start + range;
	if ((this->_size - this->_array.size()) >= range)
	{
		std::cout << this->_size - this->_array.size() << std::endl;
		std::cout << range << std::endl;
		for (int i = start; i < end; ++i)
		{
			this->_array.push_back(N);
			if (this->_largest < N)
				this->_largest = N;
			if (this->_smallest > N)
				this->_smallest = N;
		}
	}
	else
		throw SpanException("span is full");
}

int Span::shortestSpan()
{
	int size = this->_array.size();
	int shortest = INT_MAX;
	if (size <= 1)
		throw SpanException("span is empty");
	for (int i = 0; i < size; ++i)
		for (int j = i + 1; j < size; ++j)
			if (abs(this->_array[i] - this->_array[j]) < shortest)
				shortest = abs(this->_array[i] - this->_array[j]);
	return (shortest);
}

int Span::longestSpan()
{
	if (this->_array.size() <= 1)
		throw SpanException("span is empty");
	return (this->_largest - this->_smallest);
}

Span::~Span() {}

Span::SpanException::SpanException(std::string error)
{
	this->_error = error;
}

const char* Span::SpanException::what() const throw()
{
	return (this->_error.c_str());
}