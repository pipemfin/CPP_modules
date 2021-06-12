template <typename T>

int easyfind(T haystack, int needle)
{
	typename T::const_iterator iterator;
	iterator = haystack.begin();
	while (iterator != haystack.cend())
	{
		if (*iterator == needle)
		{
			std::cout << "Element finded" << std::endl;
			return (0);
		}
		++iterator;
	}
	std::cout << "Element dont finded" << std::endl;
	return (1);
}