/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:02:03 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 16:46:49 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hs;
	size_t nd;

	if (len == 0)
		return (NULL);
	hs = 0;
	while (1)
	{
		nd = 0;
		while (nd < len && needle[nd])
		{
			if (!haystack[hs + nd])
				return (NULL);
			if (haystack[hs + nd] != needle[nd])
				break ;
			nd++;
		}
		if (nd == len || !needle[nd])
			return ((char *)haystack + hs);
		hs++;
	}
	return (NULL);
}
/*
#include <stdio.h>
void main()
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor", "dolor", 15));
}*/