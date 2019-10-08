/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:17:28 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:24:28 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(int c)
{
    return (c == '\t' ||
        c == '\n' ||
        c == '\r' ||
        c == '\v' ||
        c == '\f' ||
        c == '\r' ||
        c == ' ');
}

static int ft_atoi_real(const char *str)
{
    int nbr;

    nbr = 0;
    while (ft_isdigit(*str))
    {
        nbr = nbr * 10 + ('0' - *str);
        str++;
    }
    return (nbr);
}

int     ft_atoi(const char *str)
{
    int sign;
    int nbr;
    
    sign = 1;
    while (ft_isspace(*str))
    {
        ++str;
    }
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            sign = -1;
        }
        str++;
    }
    nbr = ft_atoi_real(str);
    return (nbr * sign);
}