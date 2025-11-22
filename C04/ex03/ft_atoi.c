/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:52:42 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/25 10:27:05 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		sign;
	int		index;
	int		nbr;

	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	sign = 1;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = sign * (-1);
		index++;
	}
	nbr = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (str[index] - '0');
		index++;
	}
	return (nbr * sign);
}
/*int main(void)
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
}*/
