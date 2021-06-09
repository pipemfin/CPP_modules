#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <iostream>

Base * generate(void)
{
	int a;

	a = rand()%4;
	std::cout << a << std::endl;
	switch(a)
	{
	case(0):
		return (new classA);
	case(1):
		return (new classB);
	case(2):
		return (new classC);
	}
	return (NULL);
}

void identify_from_pointer(Base *p)
{
	classA *A;
	classB *B;
	classC *C;
	A = dynamic_cast<classA*>(p);
	B = dynamic_cast<classB*>(p);
	C = dynamic_cast<classC*>(p);
	if (A)
		std::cout << "A" << std::endl;
	else if (B)
		std::cout << "B" << std::endl;
	else if (C)
		std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

void identify_from_reference(Base &p)
{
	classA &A = dynamic_cast<classA&>(p);
	classB *B;
	classC *C;
	// A = dynamic_cast<classA&>(p);
	B = dynamic_cast<classB*>(&p);
	C = dynamic_cast<classC*>(&p);
	// if (&A)
	// 	std::cout << "A" << std::endl;
	if (B)
		std::cout << "B" << std::endl;
	else if (C)
		std::cout << "C" << std::endl;
	else
	{
		std::cout << "NULL" << std::endl;
	}
}

int main(void)
{
	srand(time(0));
	Base *mysterious = generate();
	// identify_from_pointer(mysterious);
	identify_from_reference(*mysterious);
	return (0);
}