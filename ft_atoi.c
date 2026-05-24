#include "libft.h"

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
