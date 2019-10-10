/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:03:35 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 12:52:22 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	*extract_token(const char *source, char c, char *buffer, int *length)
{
	int i;

	i = 0;
	while (source[i] && source[i] != c)
	{
		if (buffer)
		{
			buffer[i] = source[i];
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

static char	**extract_tokens(const char *source, int c, char **tokens, int *ntokens)
{
	int i;
	int j;
	int toklen;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(source);
	while (i < len)
	{
		extract_token(source + i, c, NULL, &toklen);
		if (tokens)
		{
			tokens[j] = (char *)malloc(sizeof(char *) * (toklen + 1));
			if (!tokens[j])
			{
				return (NULL);
			}
			extract_token(source + i, c, tokens[j], &toklen);
		}
		i += toklen + 1;
		j++;
	}
	if (ntokens)
	{
		*ntokens = j;
	}
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

int main(int argc, char **argv)
{
	char **tokens;
	int i;

	tokens = ft_split(argv[2], *argv[1]);
	i = 0;
	while (tokens[i])
	{
		printf("%2d: '%s' (%2zu bytes)\n", i, tokens[i], ft_strlen(tokens[i]));
		i++;
	}
	return (0);
}
