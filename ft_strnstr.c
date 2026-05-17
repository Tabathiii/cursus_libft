char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (len > 0 && *haystack != '\0')
	{
		i = 0;
		while (i < len && needle[i] != '\0' && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
// 文字列検索
