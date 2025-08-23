/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:34:27 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/22 10:38:29 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*int main(void)
{
    char *s1 = "bb";
    char *s2 = "bb";
    printf("%d\n", strcmp(s1,s2));
    printf("%d\n", ft_strcmp(s1,s2));
}*/
