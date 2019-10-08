/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:42:06 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:28:55 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    unsigned int i;

    str = (char *)malloc(len + 1);
    i = 0;
    if (str)
    {
        while (i < len && s[start + i])
        {
            str[i] = s[start + i];
        }
        str[i] = '\0';
    }
    return (str);
}