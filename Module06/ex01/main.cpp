#include <iostream>
#include <string>

typedef struct	s_data
{
	std::string	first;
	int			integer;
	std::string	second;
}				Data;

char *generate_rand_string(void)
{
	char *string = new char[11];
	for (int i = 0; i < 10; ++i)
	{
		string[i] = rand()%26 + 65;
	}
	string[10] = '\0';
	return (string);
}

void *serialize(void)
{
	srand(time(0));
	char *serialized = new char[sizeof(std::string) * 2 + sizeof(int)];

	int r = rand()%101;
	std::string str_pointer_first = generate_rand_string();
	std::string str_pointer_second = generate_rand_string();

	std::cout << "Data before serialization:" << std::endl;
	std::cout << "first string: " << str_pointer_first << "\ninteger: " << r << "\nsecond string: " <<  str_pointer_second << std::endl;

	memcpy(&serialized[0], &str_pointer_first, 24);
	memcpy(&serialized[24], &r, 4);
	memcpy(&serialized[28], &str_pointer_second, 24);
	return (reinterpret_cast<void *>(serialized));
}

Data *deserialize(void *raw)
{
	Data *deserialized = new Data;
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
	std::cout << "\nData after serialization:" << std::endl;
	std::cout << "first string: " << deserialized->first << std::endl;
	std::cout << "integer: " << deserialized->integer << std::endl;
	std::cout << "second string: " << deserialized->second << std::endl;
	return (0);
}