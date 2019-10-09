/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:02:03 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 13:39:17 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hs;
	size_t nd;

	hs = 0;
	while (1)
	{
		nd = 0;
		while (nd < len && needle[nd])
		{
			if (!haystack[hs + nd])
			{
				return (NULL);
			}
			if (haystack[hs + nd] != needle[nd])
			{
				break ;
			}
			nd++;
		}
		if (!needle[nd])
			return ((char *)haystack + hs);
		hs++;
	}
	return (NULL);
}
