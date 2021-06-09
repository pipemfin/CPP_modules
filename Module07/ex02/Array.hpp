#ifndef ARRAY_HPP
#define	ARRAY_HPP

template <class T>

class Array
{
	private:
		T	*_array;
		int	_size;
	public:
		Array()
		{
			this->_array = new T[0];
			this->_size = 0;
		}

		Array(unsigned int size)
		{
			this->_array = new T[size];
			this->_size = size;
			for (int i = 0; i < this->_size; ++i)
				this->_array[i] = T();
		}

		Array(const Array &array)
		{
			this->_size = array.Size();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; ++i)
				this->_array[i] = array[i];
		}

		Array &operator=(const Array &array)
		{
			if (this == &array)
				return (*this);
			delete[] this->_array;
			this->_size = array._size;
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; ++i)
				this->_array[i] = array[i];
			return (*this);
		}

		T& operator[](int index) const
		{
			return (this->_array[index]);
		}

		~Array()
		{
			delete[] (this->_array);
		}
		
		int Size(void) const
		{
			return (this->_size);
		}
};

#endif