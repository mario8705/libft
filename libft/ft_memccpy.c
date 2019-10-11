/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 13:48:27 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 12:18:19 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	i = 0;
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		if (srcptr[i] == (unsigned char)c)
		{
			return (dstptr + i + 1);
		}
		i++;
	}
	return (NULL);
}
