/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:39:34 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/22 11:03:47 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    char dest[100] = "";
    char src[100] = "targhy";
    //printf("ft_strcat = %s\n", ft_strcat(dest, src));
    printf("strcat = %s\n", strcat(dest, src));
}*/
