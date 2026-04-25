// #include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char	*)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

// int	main(void)
// {
// 	char	str[] = "HELLO";
// 	size_t	num;
// 	int	i;

// 	num = 3;
// 	i = 0;
// 	ft_bzero(str, num);
// 	while (i < 5)
// 	{
// 		printf("%d ", str[i]);
// 		i++;
// 	}
// 	return (0);
// }

