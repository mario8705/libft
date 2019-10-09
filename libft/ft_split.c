/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:03:35 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 15:01:19 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**tokens;
	int		ntokens;
	int		i;

	ntokens = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ntokens++;
		i++;
	}
	tokens = (char **)malloc(ntokens * sizeof(char *));
	if (tokens)
	{
	
	}
	return (tokens);
}
