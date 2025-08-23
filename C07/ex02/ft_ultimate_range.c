#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *tmp = (int *)malloc(sizeof(int)*(max - min));
    if (min > max || tmp == NULL)
        return NULL;

   int index = 0;
    while(min < max)
    {
        tmp[index] = min;
        min++;
        index++;

    }
    *range = tmp;
    return (index);
}
