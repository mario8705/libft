/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:06:30 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 16:14:40 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	//printf("strlcpy(%p, \"%s\", %zu)\n", dst, src, size);

	i = 0;
	if (size > 1)
	{
		while (src[i] && i < size - 1)
		{
			if (size > 1 && i < size - 1)
			{
				dst[i] = src[i];
			}
			i++;
		}
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (i);
}
