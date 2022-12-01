
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	f;

	if (nb > 0)
		f = nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (f);
}
/*
int     main(void)
{
        printf("%d", ft_recursive_factorial(0));
}
*/
