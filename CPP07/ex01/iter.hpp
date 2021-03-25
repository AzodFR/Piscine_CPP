#ifndef ITER_HPP
# define ITER_HPP

template< typename T, typename U, typename V>
void iter(T array, U n, V f)
{
	for (int i = 0; i < n; i++)
	{
		(f)(array[i]);
	}
}
#endif