/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:32:11 by doabrour          #+#    #+#             */
/*   Updated: 2025/08/04 15:17:40 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	index;

	index = 0;
	while (charset[index])
	{
		if (charset[index] == c)
			return (1);
		index++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	index;
	int	count_word;
	int	flag;

	index = 0;
	count_word = 0;
	flag = 0;
	while (str[index])
	{
		if (is_sep(str[index], charset))
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count_word++;
		}
		index++;
	}
	return (count_word);
}

char	*ft_strdup(char *start, int len)
{
	char	*tmp;
	int		index;

	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		tmp[index] = start[index];
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}

char	**ft_split(char *str, char *charset)
{
	int		index;
	int		i;
	char	**tmp;
	char	*start;
	int		len;

	index = 0;
	i = 0;
	tmp = (char **)malloc(sizeof(char *) * (count_word(str, charset) + 1));
	while (str[index])
	{
		while (is_sep(str[index], charset) && str[index])
			index++;
		start = &str[index];
		len = 0;
		while (!is_sep(str[index], charset) && str[index])
		{
			index++;
			len++;
		}
		if (len > 0)
			tmp[i++] = ft_strdup(start, len);
	}
	tmp[i] = NULL;
	return (tmp);
}
int	main(int ac , char **av)
{
	char **words = ft_split("hello,,world:1337", ",:");

	for (int i = 0; words[i]; i++)
	{
		write(1, words[i], strlen(words[i]));
		write(1, "\n", 1);
		free(words[i]);
	}
	free(words);
}