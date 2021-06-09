#include "span.hpp"

int main(void)
{
	Span span(10000);
	// std::vector<int> array;

	// array.push_back(5);
	// array[0] = 123;
	// std::cout << array[0] << std::endl;
	// std::cout << span.shortestSpan() << std::endl;
	for (int i = 0; i < 10000; ++i)
		span.addNumber(i*2);
	// span.addNumber(2);
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	return (0);
}

// int main(void)
// {
// 	Span span(10);
// 	span.addNumber(0);
// 	span.addNumber(1000);
// 	span.addNumber(500);
// 	span.addNumber(11);
// 	span.addNumber(750);
// 	span.addNumber(2000);
// 	std::cout << span.shortestSpan() << std::endl;
// 	std::cout << span.longestSpan() << std::endl;
// 	return (0);
// }