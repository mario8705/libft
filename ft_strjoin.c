/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:45:44 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 17:11:33 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	allocsz;
	char	*str;

	allocsz = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(allocsz);
	if (str)
	{
		ft_strlcpy(str, s1, allocsz);
		ft_strlcat(str, s2, allocsz);
	}
	return (str);
}