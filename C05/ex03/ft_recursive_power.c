
/*#include<stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	f;

	f = 1;
	if (power > 0)
		f *= nb * ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (f);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(-123, 0));
}
*/
