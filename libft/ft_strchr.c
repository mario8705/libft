/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:50:38 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 14:52:01 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (1)
    {
        if (*s == (char)c)
        {
            return (s);
        }
        if (*s == 0)
        {
            break ;
        }
        s++;
    }
    return (NULL);
}