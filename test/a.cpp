#include <iostream>

int main()
{
	int * array = new int[1];
	array[0] = 42;
	std::cout << array[0] << std::endl;
}