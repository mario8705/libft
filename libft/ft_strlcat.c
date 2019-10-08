/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:18:36 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:06:21 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (dst[i] && i < size)
    {
        i++;
    }
    while (*src && i < size)
    {
        if (size > 1 && i < size - 1)
        {
            dst[i] = *src++;
        }
        i++;
    }
    if (size > 1 && i < size)
    {
        dst[i] = 0;
    }
    return (i);
}