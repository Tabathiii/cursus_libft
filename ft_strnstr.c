char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*start;
	size_t			i;
	size_t			need_len;

	start = (unsigned char *)haystack;
	need_len = ft_strlen(needle);
	while (i < len && *(start + need_len - 1) != '\0')
	{
		while ()
	}
}
// 文字列検索
