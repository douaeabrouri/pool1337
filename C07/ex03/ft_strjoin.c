/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:46:01 by doabrour          #+#    #+#             */
/*   Updated: 2025/08/03 13:23:29 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lenght(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		index;
	int		j;

	index = 0;
	while (dest[index])
		index++;
	j = 0;
	while (src[j])
	{
		dest[index + j] = src[j];
		j++;
	}
	dest[index + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		totallen;
	int		nmbstr;
	char	*tmp;

	totallen = 0;
	nmbstr = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (nmbstr < size)
		totallen += lenght(strs[nmbstr++]);
	totallen += lenght(sep) * (size - 1);
	tmp = malloc(totallen + 1);
	tmp[0] = '\0';
	if (tmp == NULL)
		return (NULL);
	nmbstr = 0;
	while (nmbstr < size)
	{
		ft_strcat(tmp, strs[nmbstr]);
		if (nmbstr < size - 1)
			ft_strcat(tmp, sep);
		nmbstr++;
	}
	return (tmp);
}
/*
int main(void)
{
    char *strs[] = {"nta","khaltk","l3zizak"};
    char *sep = "*";
    char *join = ft_strjoin(3, strs, sep);
    printf("%s\n",join);
    free(join);
}*/
