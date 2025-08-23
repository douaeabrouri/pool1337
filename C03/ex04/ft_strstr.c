/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:31:48 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/22 20:09:33 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	commpare(char *str, char *to_found, int index, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (str[index] == to_found[j])
		{
			index++;
			j++;
		}
		else 
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (commpare(str, to_find, i, len(to_find)) == 0)
			i++;
		else
			return (&str[i]);
	}
	return (NULL);
}
