/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 10:21:04 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/21 18:51:41 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexadecimal(unsigned char c)
{
	char	*h;

	h = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(h[c / 16]);
	ft_putchar(h[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = (unsigned)str[i];
		if (c < 32 || c > 126)
		{
			hexadecimal(c);
		}
		else
			ft_putchar(c);
		i++;
	}
}
/*int main(void)
{
    char str[100] = "Hello\nhow are you?";
    ft_putstr_non_printable(str);
}
*/
