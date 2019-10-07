/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:06:30 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 15:16:14 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (src[i])
    {
        if ((i + 1) < size)
        {
            dst[i] = src[i];
            dst[i + 1] = 0;
        }
        i++;
    }
    return (i);
}