#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int len(char *base)
{
    int lenght;

    lenght = 0;
    while(base[lenght])
    {
        lenght++;
    }
    return lenght;
}

int check_duplicate_characters(char *base)
{
    int index;
    int indexj;

    index = 0;
    while(base[index])
    {
        indexj = index + 1;
        while(base[indexj])
        {
            if(base[indexj] == base[index]){
                return 0;
            }
            indexj++;
        }
        index++;
    }
    return 1;
}

int check_operateurs(char   *base)
{
    int index;

    index = 0;
    while(base[index])
    {
        if(base[index] == '+' || base[index] == '-')
            return 0;
        index++;
    }
    return 1;
}

int find_char(char r, char *base)
{
    int index;

    index = 0;
    while(base[index])
    {
        if(r == base[index])
            return index;
        index++;
    }
    return -1;
}

int ft_atoi_base(char *str, char *base)
{
    int sign;
    int index;
    int nbr;

    if(check_operateurs(base) == 0 || check_duplicate_characters(base) == 0 || len(base) < 2)
        return 0;
    index = 0;
    while((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
    {
        index++;
    }
    
    sign = 1;
    while(str[index]== '-' || str[index] == '+')
    {
        if(str[index] == '-')
            sign = sign * (-1);
        index++;
    }
    nbr = 0;
    while(find_char(str[index], base) != -1)
    {
        nbr = nbr * len(base);
        nbr += find_char(str[index], base);
        index++;
    }
    return nbr*sign;
}

int main(void){

    char *str = "       -+539";
    char *base = "0123456789abcdef";
    printf("%d\n", ft_atoi_base(str, base));   
}