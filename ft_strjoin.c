#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*longstr;
	size_t	s1_str;
	size_t	s2_str;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_str = ft_strlen(s1);
	s2_str = ft_strlen(s2);
	i = 0;
	if (s1_str + 1 > (size_t)-1 - s2_str)
		return (NULL);
	longstr = malloc(sizeof(char) * (s1_str + s2_str + 1));
	if (!longstr)
		return (NULL);
	while (i < s1_str + s2_str)
	{
		if (i < s1_str)
			longstr[i] = s1[i];
		else
			longstr[i] = s2[i - s1_str];
		i++;
	}
	longstr[i] = '\0';
	return (longstr);
}
