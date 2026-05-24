#include "libft.h"

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
// メモリ領域コピー（重なり考慮）
// コピー先のアドレス＞コピー元のアドレス　の時コピーしたい内容が変わる可能性がある。
// →後ろからコピーしてセグフォを防ぐ
