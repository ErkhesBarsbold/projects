#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	returner;

	returner = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
		}
		else
		{
			returner = 0;
		}
		i++;
	}
	return (returner);
}

/*
int     main(void)
{
        int checker;
        char    a[] = "helloworld";
        char    b[12] ;
        checker = ft_str_is_lowercase(a);
	printf("%d ", checker);
}
*/
