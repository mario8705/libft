/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:06:30 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:11:50 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (src[i] && i < size)
    {
        if (size > 1 && i < size - 1)
        {
            dst[i] = src[i];
        }
        i++;
    }
    if (size > 1)
    {
        dst[i] = '\0';
    }
    return (i);
}