#include <stdlib.h>
#include <stdio.h>

int ft_atoi_base(char *str, char *base);
char    *ft_putnbr_base(int nbr, char *base, int *index, char *tmp);
int check_operateurs(char   *base);
int check_duplicate_characters(char *base);
int len(char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{

    if((len(base_from) < 2 || len(base_to) < 2)|| (check_operateurs(base_from) ==  0 || check_operateurs(base_to) == 0) || (check_duplicate_characters(base_from) == 0 || check_duplicate_characters(base_to) == 0))
    {
        return NULL;
    }
    int index = 0;
    char *tmp = (char *)malloc(sizeof(char) * 2024);
    if(tmp == NULL)
        return NULL;
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
    char *nbr = "1337";
    char *base_from = "01234567";
    char *base_to = "01";

    printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}*/