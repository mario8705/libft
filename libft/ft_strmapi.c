/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:32:37 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 13:19:25 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*mapped;

	len = ft_strlen(s);
	mapped = (char *)malloc(len + 1);
	if (mapped)
	{
		i = 0;
		while (i < len)
		{
			mapped[i] = f(i, s[i]);
			i++;
		}
	}
	return (mapped);
}
