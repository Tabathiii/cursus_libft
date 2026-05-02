void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		q;
	size_t				i;

	p = (const unsigned char *)s;
	q = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == q)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
