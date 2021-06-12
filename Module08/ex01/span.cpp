#include "span.hpp"

Span::Span(unsigned int size)
{
	this->_size = size;
}

Span::Span(const Span &span)
{
	this->_array = span._array;
	this->_size = span._size;
}


Span &Span::operator=(const Span &span)
{
	if (this == &span)
		return (*this);
	this->_array = span._array;
	this->_size = span._size;
	return (*this);
}

void Span::addNumber(int N)
{
	if (this->_array.size() < this->_size)
		this->_array.push_back(N);
	else
		throw SpanException("span is full");
}

void Span::addNumber(int N, unsigned int range)
{
	int start = this->_array.size() > 0 ? this->_array.size() - 1 : 0;
	int end = start + range;
	if ((this->_size - this->_array.size()) >= range)
		for (int i = start; i < end; ++i)
			this->_array.push_back(N);
	else
		throw SpanException("span is full");
}

int Span::shortestSpan()
{
	int shortest = INT_MAX;
	if (this->_array.size() <= 1)
		throw SpanException("span is empty");
	std::sort(_array.begin(), _array.end());
	for (unsigned int i = 1; i < this->_array.size(); ++i)
		if (abs(this->_array[i] - this->_array[i - 1]) < shortest)
			shortest = abs(this->_array[i] - this->_array[i - 1]);
	return (shortest);
}

int Span::longestSpan()
{
	if (this->_array.size() <= 1)
		throw SpanException("span is empty");
	std::sort(_array.begin(), _array.end());
	return (abs(this->_array[0] - this->_array[this->_array.size() - 1]));
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