#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	dest = (char *) malloc (ft_strlen(src));
	while (src[i] != 0)
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
int 	main(void)
{
	char	a[] = "HELLO MY NAME IS";
	char 	*b;
	b = ft_strdup(a);
	printf("%s", b);
}
