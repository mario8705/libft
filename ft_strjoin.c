/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:45:44 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 16:22:38 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	allocsz;
	char	*str;

	if (!s1 && !s2)
		return (0);
	allocsz = 1;
	if (s1)
		allocsz += ft_strlen(s1);
	if (s2)
		allocsz += ft_strlen(s2);
	str = (char *)malloc(allocsz);
	if (str)
	{
		*str = '\0';
		if (s1)
			ft_strlcat(str, s1, allocsz);
		if (s2)
			ft_strlcat(str, s2, allocsz);
	}
	return (str);
}
