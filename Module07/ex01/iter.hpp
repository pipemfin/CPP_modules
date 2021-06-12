#ifndef ITER_HPP
#define ITER_HPP

template <typename T>

void iter(T *a, unsigned lenght, void(*func)(const T &arg))
{
	for (int i = 0; i < lenght; ++i)
		func(a[i]);
}

#endif