#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tmp =  (int *)malloc(sizeof(int) * (max - min));
    if(min > max || tmp == NULL)
        return NULL;
    int index = 0;
    while(min < max)
    {
        tmp[index] = min;
        min++;
        index++;

    }
    return tmp;
}
int main(void)
{
    int min = 4;
    int max = 10;
    int i = 0;
    int *tmp = ft_range(min, max);
    while(i < (max - min))
    {
        printf("%d\n", tmp[i]);
        i++;
    }
}