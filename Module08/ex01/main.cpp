#include "span.hpp"


int main(void)
{
	Span first_span(10000);
	Span second_span(5000);

	first_span.addNumber(5);
	first_span.addNumber(7);
	first_span.addNumber(12);

	second_span.addNumber(9);
	second_span.addNumber(99);
	second_span.addNumber(999);

	std::cout << "Shortest span in first array (elems=5,7,12) is: " << first_span.shortestSpan() << std::endl;
	std::cout << "Longest span in first array (elems=5,7,12) is: " << first_span.longestSpan() << std::endl;

	std::cout << "\nShortest span in second array (elems=5,7,12) is: " << second_span.shortestSpan() << std::endl;
	std::cout << "Longest span in second array (elems=5,7,12) is: " << second_span.longestSpan() << std::endl;

	std::cout << "\nUsing operator =: first_span = second_span, and then checking span again" << std::endl;
	first_span = second_span;
	std::cout << "\nShortest span in first array (elems=5,7,12) is: " << first_span.shortestSpan() << std::endl;
	std::cout << "Longest span in first array (elems=5,7,12) is: " << first_span.longestSpan() << std::endl;

	std::cout << "\nNow, we try to add more elements than we can add:" << std::endl;
	try
	{
		first_span.addNumber(5, 1000000);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

/* Main from subject
int main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}
*/
