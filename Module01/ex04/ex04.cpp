#include <iostream>

void show_string_through_pointer(std::string *newline)
{
	std::cout << *newline << std::endl;
}

void show_string_through_reference(std::string &newline)
{
	newline = "NEW";
	std::cout << newline << std::endl;
}

int main(void)
{
	std::string newline = "HI THIS IS BRAIN";
	std::string *p_newline = &newline;
	std::string &r_newline = newline;
	show_string_through_pointer(p_newline);
	show_string_through_reference(r_newline);
	std::cout << newline << std::endl;
	return (0);
}