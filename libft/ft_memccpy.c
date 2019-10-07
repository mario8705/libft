/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 13:48:27 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 14:35:24 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
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
		i++;
		if (srcptr[i] == (unsigned char)c)
		{
			return (dstptr + i);
		}
	}
	return (NULL);
}
