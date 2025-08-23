#include <stdlib.h>
#include <stdio.h>

int lenght(char *str){
    int len;
    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}

char *ft_strcat(char *dest, char *src)
{
    int index;

    index = 0;
    while(dest[index])
    {
        index++;
    }
    int j = 0;
    while(src[j])
    {
        dest[index + j] = src[j];
        j++;
    }
    dest[index + j] = '\0';
    return dest;
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char *tmp1;
    int totallen = 0;
    int nmbstr = 0;

    if(size == 0)
    {
        tmp1 = malloc(1);
        tmp1[0]= '\0';
        return tmp1;
    }
    while(nmbstr < size)
    {
        totallen += lenght(strs[nmbstr]);
        nmbstr++;
    }
    totallen += lenght(sep) * (size - 1);

    char *tmp = malloc(totallen + 1);
    if(tmp == NULL)
    {
        return NULL;
    }
    nmbstr = 0;
    while(nmbstr < size)
    {
        ft_strcat(tmp, strs[nmbstr]);
        if(nmbstr < size - 1)
            ft_strcat(tmp, sep);
        nmbstr++;
    }
    return (tmp);
}

int main(void)
{
    char *strs[] = {"nta","khaltk","l3zizak"};
    char *sep = "w";
    char *join = ft_strjoin(2, strs, sep);
    printf("%s\n",join);
    free(join);
}