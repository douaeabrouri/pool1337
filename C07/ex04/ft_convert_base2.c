/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:51:24 by doabrour          #+#    #+#             */
/*   Updated: 2025/08/04 11:09:05 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nbr, char *base, int *index, char *tmp);
int		ft_len(char	*base);

int	check_duplicate_characters(char *base)
{
	int	index;
	int	indexj;

	index = 0;
	while (base[index])
	{
		indexj = index + 1;
		while (base[indexj])
		{
			if (base[indexj] == base[index])
				return (0);
			indexj++;
		}
		index++;
	}
	return (1);
}

int	check_operateurs(char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		index++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		index;
	char	*tmp;

	if ((ft_len(base_from) < 2 || ft_len(base_to) < 2) \
		|| (check_operateurs(base_from) == 0 \
		|| check_operateurs(base_to) == 0) \
		|| (check_duplicate_characters(base_from) == 0 \
		|| check_duplicate_characters(base_to) == 0))
		return (NULL);
	index = 0;
	tmp = (char *)malloc(sizeof(char) * 2024);
	if (tmp == NULL)
		return (NULL);
	ft_putnbr_base(
		ft_atoi_base(nbr, base_from),
		base_to,
		&index,
		tmp
		);
	tmp[index] = '\0';
	return (tmp);
}
/*int main(void)
{
    char *nbr = "539";
    char *base_from = "0123456789abcdef";
    char *base_to = "01";

    printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}*/
