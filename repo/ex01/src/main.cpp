#include "iter.hpp"

int main()
{
	const size_t length = 5;
	{
		int* array = new int[length];
		for (size_t i = 0; i < length; i++)
			array[i] = i;
		std::cout << "---" << std::endl;
		iter(array, length, print);
		delete[] array;
	}
	{
		std::string* array = new std::string[length];
		for (size_t i = 0; i < length; i++)
			array[i] = std::string(1, 'a' + i);
		std::cout << "---" << std::endl;
		iter(array, length, print);
		delete[] array;
	}
}
