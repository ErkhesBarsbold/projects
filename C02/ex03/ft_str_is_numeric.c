#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	returner;

	returner = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
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
        char    a[] = "1234a12389";
        char    b[12] ;
        checker = ft_str_is_numeric(a);
}
*/
