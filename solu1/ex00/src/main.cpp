/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:38:25 by tblaase           #+#    #+#             */
/*   Updated: 2022/04/13 14:42:46 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main()
{

	{
	float	a = 21.445f;
	float	b = 42.445f;

	std::cout << "The max of a: " << a << " and b: " << b << " is:" <<
	"\t" << max(a, b) << std::endl;

	std::cout << "The min of a: " << a << " and b: " << b << " is:" <<
	"\t" << min(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "before:\n\ta: " << a << "\n\tb: " << b << std::endl;
	swap(a, b);
	std::cout << "after:\n\ta: " << a << "\n\tb: " << b << std::endl;
	}

	std::cout << std::endl << "------------------------------------------------------------------" << std::endl << std::endl;

	{
	std::string	a = "String A";
	std::string b = "String B";

	std::cout << "The max of a: " << a << " and b: " << b << " is:" <<
	"\t" << ::max(a, b) << std::endl;

	std::cout << "The min of a: " << a << " and b: " << b << " is:" <<
	"\t" << ::min(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "before:\n\ta: " << a << "\n\tb: " << b << std::endl;
	::swap(a, b);
	std::cout << "after:\n\ta: " << a << "\n\tb: " << b << std::endl;
	}

	return (0);
}
