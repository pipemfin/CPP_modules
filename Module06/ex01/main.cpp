#include <iostream>
#include <string>

typedef struct	s_data
{
	std::string	first;
	int			integer;
	std::string	second;
}				Data;

void *serialize(void)
{
	srand(time(0));
	char *string_first = new char[11];
	char *string_second = new char[11];
	char *serialized = new char[sizeof(std::string) * 2 + sizeof(int)];
	int r;
	std::string str_pointer_first;
	std::string str_pointer_second;
	for (int i = 0; i < 10; ++i)
	{
		string_first[i] = rand()%26 + 65;
		string_second[i] = rand()%26 + 65;
	}
	string_first[10] = '\0';
	string_second[10] = '\0';
	str_pointer_first = string_first;
	str_pointer_second = string_second;
	r = rand()%101;
	serialized[24] = r;
	std::cout << "first string: " << str_pointer_first << "\ninteger: " << r << "\nsecond string: " <<  str_pointer_second << std::endl;
	memcpy(&serialized[0], &str_pointer_first, 24);
	memcpy(&serialized[24], &r, 4);
	memcpy(&serialized[28], &str_pointer_second, 24);
	return (reinterpret_cast<void *>(serialized));
}

Data *deserialize(void *raw)
{
	Data *deserialized = new Data;
	// deserialized = reinterpret_cast<Data *>(raw);
	deserialized->first = static_cast<std::string>(reinterpret_cast<char *>(raw));
	deserialized->integer = static_cast<int>(reinterpret_cast<char *>(raw)[24]);
	deserialized->second = static_cast<std::string>(&reinterpret_cast<char *>(raw)[28]);
	return (deserialized);
}

int		main(int argc, char **argv)
{
	Data *deserialized;
	void *first = serialize();
	deserialized = deserialize(first);
	std::cout << sizeof(void *) << std::endl;
	std::cout << sizeof(Data *) << std::endl;
	std::cout << "first string: " << deserialized->first << std::endl;
	std::cout << "integer: " << deserialized->integer << std::endl;
	std::cout << "second string: " << deserialized->second << std::endl;
	return (0);
}