/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:53:43 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 16:56:24 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *occur;

	occur = NULL;
	while (1)
	{
		if (*s == (char)c)
		{
			occur = (char *)s;
		}
		if (*s == 0)
		{
			break ;
		}
		s++;
	}
	return (occur);
}
