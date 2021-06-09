template <typename T>

int easyfind(T haystack, int needle)
{
	typename T::const_iterator iterator;
	iterator = haystack.begin();
	while (iterator != haystack.cend())
	{
		if (*iterator == needle)
			return (0);
		++iterator;
	}
	return (1);
}