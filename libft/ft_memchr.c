/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:17:21 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 14:35:28 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *search;

	i = 0;
	search = (unsigned char *)s;
	while (i < n)
	{
		if (search[i] == (unsigned char)c)
		{
			return (search + i);
		}
		i++;
	}
	return (NULL);
}
