#include "whatever.hpp"

int main()
{
	{
		int a = 2;
		int b = 3;

		std::cout << "--- 1 ---" << std::endl;
		swap(a, b);
		std::cout << "a : " << a << std::endl;
		std::cout << "b : " << b << std::endl;

		std::cout << "--- 2 ---" << std::endl;
		std::cout << "min(a, b) : " << min(a, b) << std::endl;
		std::cout << "max(a, b) : " << max(a, b) << std::endl;
	}
	{
		std::string a = "s1";
		std::string b = "s2";

		std::cout << "--- 3 ---" << std::endl;
		swap(a, b);
		std::cout << "a : " << a << std::endl;
		std::cout << "b : " << b << std::endl;

		std::cout << "--- 4 ---" << std::endl;
		std::cout << "min(a, b) : " << min(a, b) << std::endl;
		std::cout << "max(a, b) : " << max(a, b) << std::endl;
	}
}
