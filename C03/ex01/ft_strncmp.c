/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:46:20 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/22 10:34:42 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && (s1[index] || s2[index]))
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (s1[index] - s2[index]);
	}
	return (0);
}
/*int main(void){

    char *s1 = "jfshgkhdgkhkk";
    char *s2 = "fhfg";

    printf("%d\n", strncmp(s1, s2, 1));
    printf("%d\n", ft_strncmp(s1, s2, 1));
}*/
