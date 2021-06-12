#include "mutantstack.hpp"
#include <list>
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> second_stack;
	std::cout << "Adding next numbers (5, 17, 3, 5, 737, 0) in our stack" << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "\nUse the assignment operator and check the numbers in second stack with iterators" << std::endl;
	second_stack = mstack;
	MutantStack<int>::iterator it = second_stack.begin();
	MutantStack<int>::iterator ite = second_stack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}


/* Main from subject
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
*/