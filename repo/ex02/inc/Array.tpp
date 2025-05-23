template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	if (n == 0)
		_array = NULL;
	else
		_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _size(other._size)
{
	if (_size == 0)
		_array = NULL;
	else
	{
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) 
			_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
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
			for (unsigned int i = 0; i < _size; i++)
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
		throw std::out_of_range("index out of bounds");
	return _array[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw std::out_of_range("index out of bounds");
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
