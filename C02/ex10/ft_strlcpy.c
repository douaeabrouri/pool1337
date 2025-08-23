/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 10:05:25 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/20 20:39:34 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	j = 0;
	while (src[j])
		j++;
	return (j);
}
/*int main(void)
{
    char src[100] = "douae";
    char    dest[5];
    printf("%d\n", ft_strlcpy(dest,src, 4));
    //printf("%lu\n" , strlcpy(dest,src,1));
    printf("%s\n", dest);
}*/
