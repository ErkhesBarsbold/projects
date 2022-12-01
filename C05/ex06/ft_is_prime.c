
#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb >= 2)
	{
		i = 2;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	if (nb < 2)
		return (0);
	return (1);
}
/*
int	main(void)
{
	int	i;

	i = 1;
	while (i <= 1000)
	{
		if (ft_is_prime(i) == 1)
			printf("%d ",i);
		i++;
	}
	return (0);
}
*/
