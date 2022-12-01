
#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	s;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	if (index >= 2)
		s = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (s);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(5));
}
*/
