#ifndef ARRAY_HPP
# define ARRAY_HPP


template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(void)
		{ _array = NULL; _size = 0;};
		~Array()
		{if (_array)
			{delete [] _array;}
		};
		Array(unsigned int n)
		{ _array = new T[n]; _size = n;
			for(unsigned int i = 0; i < n; i++)
				_array[i] = 0;};
		Array(Array const &obj)
		{ _array = new T[obj._size];
			_size = obj._size;
			for(unsigned int i = 0; i < _size; i++)
				_array[i] = obj._array[i];};
		Array &operator=(Array const &obj)
		{for(unsigned int i = 0; i < obj._size && i < _size; i++)
				_array[i] = obj._array[i];};
		T &operator[](unsigned int n) const
		{
			if (n >= _size)
				throw std::out_of_range("\e[91mOut of bound\e[0m");
			return _array[n];
		};
		int size(void)
		{return _size;};
};

#endif