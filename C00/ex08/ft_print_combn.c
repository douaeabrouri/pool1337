/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:41:37 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/17 14:26:21 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	equalize(char str[10], int n, int index)
{
	while (index < n)
	{
		str[index] = str[index - 1] + 1;
		index++;
	}
}

void	init(char dst[10])
{
	int		i;
	char	*src;

	i = 0;
	src = "0123456789";
	while (i < 10)
	{
		dst[i] = src[i];
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	combn[10];
	int		index;

	init(combn);
	while (n > 0 && n < 10)
	{
		index = n - 1;
		while (index > 0)
		{
			if (combn[index] - 48 > 9 - (n - 1 - index))
			{
				combn[index - 1]++;
				equalize(combn, n, index);
			}
			index--;
		}
		write(1, combn, n);
		if (combn[0] - 48 != 9 - (n - 1))
			write(1, ", ", 2);
		else
			break ;
		combn[n - 1]++;
	}
}

int main(void){
	ft_print_combn(4);
}
