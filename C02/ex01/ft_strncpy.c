#include<unistd.h>
//#include<stdio.h>
//#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

/*
int     main(void)
{
        char    a[] = "Hello 12345";
        char    b[]  = "Hello world hfskjfsli";
	ft_strncpy(b, a, 20);
}
*/
