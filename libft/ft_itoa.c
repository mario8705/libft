/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:54:46 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 13:03:14 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrevdup(const char *s, size_t n)
{
	char	*str;
	int		i;

	str = (char *)malloc(n + 1);
	if (str)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			str[i] = s[i];
		}
		str[n] = '\0';
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	buf[16];
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	while (n != 0 || i == 0)
	{
		buf[i++] = '0' + (n % 10);
		n /= 10;
	}
	if (neg)
		buf[i++] = '-';
	return (ft_strrevdup(buf, i));
}
