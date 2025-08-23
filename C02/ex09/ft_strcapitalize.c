/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:20:26 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/21 18:45:34 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		counter;

	i = 0;
	ft_strlowcase(str);
	counter = 1;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < '0' \
					|| str[i] > '9') && (str[i] < 'A' || str[i] > 'Z'))
			counter = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			counter = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z') \
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (counter == 1)
			{
				str[i] -= 32;
				counter = 0;
			}
		}
		i++;
	}
	return (str);
}
/*int main(void){
    char str[100] = "hi, how aRe you? 40words forty-two; fifty+and+one";
    ft_strcapitalize(str);
    int i = 0;
    while(str[i]){
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}*/