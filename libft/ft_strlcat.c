/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:18:36 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 17:54:51 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;

	len = 0;
	while (*dst && len < size)
	{
		dst++;
		len++;
	}
	while (*src)
	{
		if (size > 1 && len < size - 1)
		{
			*dst++ = *src;
			*dst = 0;
		}
		src++;
		len++;
	}
	return (len);
}
