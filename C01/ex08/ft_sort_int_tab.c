#include<unistd.h>
//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	i;	
	int	size1;
	int	swap;

	n = 0;
	size1 = size - 1;
	while (n < size)
	{
		i = 0;
		while (i < size1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}	
		n++;
		size1--;
	}
}

/*
int     main(void)
{
        int    a[] = {1, 22, 33, 44, 5, 16, 7, 8, 9 , 10};
        int     n = 10, i=0;
        ft_sort_int_tab(a, n);
        while (i < n)
        {
		printf("%d ",a[i]);
		i++;
	}
	return (0);
}
*/
