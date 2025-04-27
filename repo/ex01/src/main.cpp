#include "iter.hpp"

void print(const int& i)
{
	std::cout << i << std::endl;
}

int main()
{
	const size_t length = 5;
	int* array = new int[length];
	for (size_t i = 0; i < length; i++)
		array[i] = i;

	iter(array, length, print);

	delete[] array;
}
