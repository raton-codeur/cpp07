#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	private :
		T				*_array;
		unsigned int	_size;
	
	public :
				Array();
				Array(unsigned int n);
				Array(const Array& other);
		Array&	operator=(const Array& other);
				~Array();
	
		T&				operator[](unsigned int i);
		unsigned int	size() const;
	
		class outOfBoundsException : public std::exception
		{
			public :
				const char* what() const throw();
};

#include "Array.tpp"
#endif