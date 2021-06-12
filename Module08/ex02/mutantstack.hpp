#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack<T> &stack) : std::stack<T>(stack) {};
		MutantStack &operator=(const MutantStack<T> &stack)
		{
			if (this == &stack)
				return (*this);
			std::stack<T>::operator=(stack);
			return (*this);
		};
		virtual ~MutantStack() {};

		iterator begin(void) 	{	return this->c.begin();};
		iterator end(void) 		{	return this->c.end();};
};

#endif