#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	i = dst_len;
	while (i < dstsize - 1 && src[i - dst_len] != '\0')
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
// サイズ制限付きの文字列連結
//dstに'\0'が無い時対策
