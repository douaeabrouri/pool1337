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

int count_world(char *str)
{
    int size = 0;
    int flag = 0;
    int i = 0;
    while(str[i])
    {
        if((str[i] != ' ' && str[i] != '\t') && flag == 0)
        {
            flag = 1;
            size++;
        }
        else if(str[i] == ' ' || str[i] == '\t'){ 
            flag = 0;
        }
        i++;
    }
    return size;
}

char *ft_strdup(char *start, int len)
{
    char *tmp = (char *)malloc(sizeof(char) * (len + 1));
    if(tmp == NULL)
        return NULL;
    int index = 0;
    while(index < len)
    {
        tmp[index] = start[index];
        index++;
    }
    tmp[index] = '\0';
    return tmp;
}

char **ft_split(char *str)
{
    char   **tmp =(char **)malloc(sizeof(char *) * (count_world(str) + 1));

    int i = 0;
    int index = 0;
    while(str[index])
    {
        while(str[index] == ' ' || str[index] == '\t')
            index++;
        if(str[index] == '\0')
            break;
        char *start = &str[index];
        int len = 0;
        while(str[index] && str[index] != ' ' && str[index] != '\t')
        {
            len++;
            index++;
        }
        if(len > 0)
        {
            tmp[i] = ft_strdup(start, len);
            i++;
        }
    }
    tmp[i] = NULL;
    return tmp;
}
int main(void)
{
    char *str = "hello world";
    char **dest = ft_split(str);
    int i = 0;
    while(i < 2)
    {
        printf("%s\n", dest[i]);
        i++;
    }
}
