#include <stdlib.h>
#include <stdio.h>

int len(char *str)
{
    int len = 0;
    while(str[len])
    {
        len++;
    }
    return len;
}

char *str_rev(char *str)
{
    int first = 0;
    int end = len(str) - 1;
    char *tmp = (char *)malloc(sizeof(char) * 12);
    while(first <= end)
    {
        char tmp = str[first];
        str[first] = str[end];
        str[end] = tmp;
        end--;
        first++;
    }
    return (str);
}

char *ft_itoa(int nb)
{
    char *tmp = (char *)malloc(sizeof(char) * 12);
    if(tmp == NULL)
    {
        return NULL;
    }
    if(nb == 0)
        return "0";
    int index = 0;
    int neg = 0;
    if(nb < 0)
    {
        nb *= (-1);
        neg = 1;
    }
    while(nb)
    {
        tmp[index] = (nb % 10) + '0';
        nb /= 10;
        index++;
    }
    if(neg == 1)
    {
        tmp[index] = '-';
    }
    return str_rev(tmp);
}

int main(void)
{
    int i = 0;
    int tmp[5] = {-34262, 456, 43, 9, 0};
    
    while(i < 5)
    {
        printf("%s\n", ft_itoa(tmp[i]));
        i++;
    }
}