#include <stdlib.h>
#include <stdio.h>

int ft_atoi_base(char *str, char *base);
char    *ft_putnbr_base(int nbr, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    return (
        ft_putnbr_base(
            ft_atoi_base(nbr, base_from),
            base_to
        )
    );
}
int main(void)
{
    char *nbr = "2147483647";
    char *base_from = "0123456789";
    char *base_to = "01";

    printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}