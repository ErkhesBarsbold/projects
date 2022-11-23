#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	save;

	save = *a;
	*a = *b;
	*b = save;
}

/*int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 20;
	ft_swap(&a,&b);
	printf("%d %d",a ,b);
	return (0);
}*/
