#include<unistd.h>
//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		n++;
	return (n);
}

/*int     main(void)
{
        char    a[] = "HELLO";

	int n =  ft_strlen(a);
	printf("%d",n);
} 
*/
