#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <iostream>

Base* generate(void)
{
	int a;
	a = rand()%3;
	
	if (a == 0)
	{
		std::cout << "Generated class is A" << std::endl;
		return (new classA);
	}
	else if (a == 1)
	{
		std::cout << "Generated class is B" << std::endl;
		return (new classB);
	}
	else
	{
		std::cout << "Generated class is C" << std::endl;
		return (new classC);
	}
}

void identify_from_pointer(Base *p)
{
	classA *A;
	classB *B;
	classC *C;
	A = dynamic_cast<classA*>(p);
	B = dynamic_cast<classB*>(p);
	C = dynamic_cast<classC*>(p);
	std::cout << "Class identified from pointer is ";
	if (A)
		std::cout << "A" << std::endl;
	else if (B)
		std::cout << "B" << std::endl;
	else if (C)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	std::cout << "Class identified from reference is ";
	try
	{
		classA A = dynamic_cast<classA&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)	{}
	try
	{
		classB B = dynamic_cast<classB&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)	{}
	try
	{
		classC C = dynamic_cast<classC&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)	{}
}

int main(void)
{
	srand(time(0));
	Base *mysterious = generate();
	if (!mysterious)
	{
		std::cout << "Malloc error!" << std::endl;
		return (1);
	}
	identify_from_pointer(mysterious);
	identify_from_reference(*mysterious);
	return (0);
}