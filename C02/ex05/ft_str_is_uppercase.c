#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	returner;

	returner = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
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
        char    a[] = "HELLOWORLD";
        char    b[12] ;
        checker = ft_str_is_uppercase(b);
        printf("%d ", checker);
}
*/
