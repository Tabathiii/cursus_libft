// #include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	j;
	int	num;

	j = 1;
	num = 0;
	if (!str)
		return (0);
	while (*str != '\0' && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * j);
}

// int	main(void)
// {
// 	char	*a;
// 	char	*b;
// 	char	*c;
// 	int	num1;
// 	int	num2;
// 	int	num3;

// 	a = "  +1234dsf";
// 	b = "  	-1234sdv";
// 	c = "  	-+1234dry";
// 	num1 = ft_atoi(a);
// 	num2 = ft_atoi(b);
// 	num3 = ft_atoi(c);
// 	printf("%d, %d, %d", num1, num2, num3);
// }
