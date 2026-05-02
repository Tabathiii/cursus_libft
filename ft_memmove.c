void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*q;

	if (!dst && !src)
		return (NULL);
	p = (unsigned char *)dst;
	q = (const unsigned char *)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			p[len - 1] = q[len - 1];
			len--;
		}
	}
	return (dst);
}
