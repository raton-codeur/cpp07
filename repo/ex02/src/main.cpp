#include "Array.hpp"

int main()
{
	{
		Array<int> a;

		std::cout << "--- 1.1 ---" << std::endl;
		std::cout << "size : " << a.size() << std::endl;

		std::cout << "--- 1.2 ---" << std::endl;
		try
		{
			a[0];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			a[3];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		Array<int> b(5);

		std::cout << "--- 2.1 ---" << std::endl;
		std::cout << "size : " << b.size() << std::endl;

		std::cout << "--- 2.2 ---" << std::endl;
		for (unsigned int i = 0; i < b.size(); i++)
		{
			std::cout << b[i] << " -> ";
			b[i] = i;
			std::cout << b[i] << std::endl;
		}

		std::cout << "--- 2.3 ---" << std::endl;
		try
		{
			b[5];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			b[-1];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "--- 3.1 " << std::endl;
		Array<int> c(b);
		for (unsigned int i = 0; i < c.size(); i++)
		{
			std::cout << c[i] << std::endl;
		}

		std::cout << "--- 3.2 " << std::endl;
		c = a;
		std::cout << "size : " << c.size() << std::endl;
	}
	{
		const Array<int> a(2);

		std::cout << "--- 4.1 ---" << std::endl;
		// a[0] = 42;

		std::cout << "--- 4.2 ---" << std::endl;
		try
		{
			a[20];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Array< Array<int> > a(3);

		std::cout << "--- 5.1 ---" << std::endl;
		std::cout << "size : " << a.size() << std::endl;

		std::cout << "--- 5.2 ---" << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
		{
			std::cout << "size : " << a[i].size() << std::endl;
		}
	}
}
