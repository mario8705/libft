/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:06:30 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 16:20:19 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (src[i])
	{
		if (size > 1 && i < size - 1)
		{
			*dst++ = src[i];
		}
		i++;
	}
	if (size > 0)
	{
		*dst = '\0';
	}
	return (i);
}
