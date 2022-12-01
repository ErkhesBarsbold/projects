
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	f;

	f = 1;
	i = 0;
	while (i < power)
	{
		f *= nb;
		i++;
	}
	if (power < 0)
		return (0);
	return (f);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(10, 3));
}
*/
