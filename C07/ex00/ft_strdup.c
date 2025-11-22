/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:28:59 by doabrour          #+#    #+#             */
/*   Updated: 2025/08/03 10:30:28 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		varlen;
	int		index;
	char	*tmp;

	varlen = len(src);
	tmp = (char *)malloc(sizeof(char) * (varlen + 1));
	if (tmp == NULL)
		return (NULL);
	index = 0;
	while (src[index])
	{
		tmp[index] = src[index];
		index++;
	}
	tmp[varlen] = '\0';
	return (tmp);
}
