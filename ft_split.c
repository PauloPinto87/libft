/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:52:54 by paulo             #+#    #+#             */
/*   Updated: 2024/12/04 12:31:40 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	word_len(char const *s, char sep, size_t pos)
{
	size_t	len;

	len = 0;
	while (s[pos] && s[pos] != sep)
	{
		len++;
		pos++;
	}
	return (len);
}

static size_t	count_words(const char *str, char sep)
{
	size_t	qnt_words;
	size_t	i;

	qnt_words = 0;
	i = 0;
	while (str[i])
	{
		if (word_len(str, sep, i))
		{
			i += word_len(str, sep, i);
			qnt_words++;
		}
		else
			i++;
	}
	return (qnt_words);
}

static char	*extract_word(char const *s, size_t start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	qnt_words;
	size_t	i;
	size_t	j;
	char	**list_splited;

	qnt_words = count_words(s, c);
	list_splited = malloc((qnt_words + 1) * sizeof(char *));
	if (!list_splited)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < qnt_words)
	{
		if (word_len(s, c, i))
		{
			list_splited[j] = extract_word(s, i, word_len(s, c, i));
			i += word_len(s, c, i);
			j++;
		}
		else
			i++;
	}
	list_splited[qnt_words] = 0;
	return (list_splited);
}

/* int	main(void)
{
	char	sep;
	char	**list_splited;
	size_t	i;

	sep = ' ';
	char	*str = "   Paulo      Henrique         Casado  Gomes Pinto        ";
	list_splited = ft_split(str, sep);
	i = 0;
	while (list_splited[i])
	{
		printf("list_splited[%ld] = %s\n", i, list_splited[i]);
		i++;
	}

	return (0);
}

 */