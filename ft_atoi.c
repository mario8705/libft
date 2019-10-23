/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:17:28 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 17:56:07 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int					ft_isspace(int c)
{
	return (c == '\t' ||
		c == '\n' ||
		c == '\r' ||
		c == '\v' ||
		c == '\f' ||
		c == '\r' ||
		c == ' ');
}

static unsigned long int	ft_atoi_real(const char *str)
{
	unsigned long int nbr;

	nbr = 0;
	while (ft_isdigit(*str) && nbr < 0x8000000000000000)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr);
}

int							ft_atoi(const char *str)
{
	unsigned long int	nbr;
	int					sign;

	sign = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	nbr = ft_atoi_real(str);
	if (sign)
	{
		if (nbr >= 0x8000000000000000)
			return (0);
		return ((int)(~nbr + 1));
	}
	if (nbr >= 0x7FFFFFFFFFFFFFFF)
		return (-1);
	return ((int)nbr);
}
