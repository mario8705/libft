/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:03:35 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 13:15:09 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	*extract_token(const char *s, char c, char *buffer, int *length)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		if (buffer)
		{
			buffer[i] = s[i];
		}
		i++;
	}
	if (buffer)
	{
		buffer[i] = '\0';
	}
	if (length)
	{
		*length = i;
	}
	return (buffer);
}

static char	**extract_tokens(const char *s, int c, char **tokens, int *ntokens)
{
	int i;
	int j;
	int toklen;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		extract_token(s + i, c, NULL, &toklen);
		if (tokens)
		{
			tokens[j] = (char *)malloc(sizeof(char *) * (toklen + 1));
			if (!tokens[j])
				return (NULL);
			extract_token(s + i, c, tokens[j], &toklen);
		}
		i += toklen + 1;
		j++;
	}
	if (ntokens)
		*ntokens = j;
	return (tokens);
}

char		**ft_split(const char *s, char c)
{
	char	**tokens;
	int		ntokens;
	int		i;

	extract_tokens(s, c, NULL, &ntokens);
	tokens = (char **)ft_calloc(ntokens + 1, sizeof(char **));
	if (tokens)
	{
		if (!extract_tokens(s, c, tokens, NULL))
		{
			i = 0;
			while (i < ntokens)
			{
				free(tokens[i]);
				i++;
			}
			free(tokens);
		}
	}
	return (tokens);
}
