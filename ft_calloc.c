#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	b;
	void	*p;

	b = size * count;
	if (((b >= SIZE_MAX) || (b >= 2147483647))\
		|| (((int)count < 0) && ((int)size < 0)))
	{
		return (NULL);
	}
	p = (void *)malloc(count * size);
	if (!p)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
