#include <stdio.h>
#include <stdlib.h>

int len(char *str)
{
    int len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}

char    *ft_strdup(char *src)
{
    int varlen = len(src);
    char *tmp = malloc(sizeof(char) * (varlen + 1));
    int index;

    if(tmp == NULL)
        return NULL;
    index = 0;
    while(src[index])
    {
        tmp[index] = src[index];
        index++;
    }
    tmp[varlen] = '\0';
    return tmp;
}

int main(void)
{
    char *src = "hello world";
    printf("%s\n",ft_strdup(src));
}
