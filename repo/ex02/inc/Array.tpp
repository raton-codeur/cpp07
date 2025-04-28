template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigend int n) : _size(n)
{
	if (n == 0)
		_array = NULL;
	else
		_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size)
{
	if (_size == 0)
		_array = NULL;
	else
	{
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++) 
			_array[i] = other._array[i];
	}
}

template <typename T>
Array& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		if (_array != NULL)
			delete[] _array;
		_size = other._size;
		if (_size == 0)
			_array = NULL;
		else
		{
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (_array != NULL)
		delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw outOfBoundsException();
	return _array[i];
}

unsigned int Array::size() const
{
	return _size;
}

const char* Array::outOfBoundsException::what() const throw()
{
	return "index out of bounds";
}
