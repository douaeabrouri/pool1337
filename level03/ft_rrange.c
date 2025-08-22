#include <stdlib.h>
#include <stdio.h>
int lenght(int a, int b)
{
    if(a > b)
    { // 1 2 3 4  
        int i = 0;
        while(a>b)
        {
            i++;
            a--;
        }
        return i;
    }
    else if(b > a)
    {
        int i = 0;
        while(b > a)
        {
            i++;
            b--;
        }
        return i;
    }
    return 1;
}

int     *ft_rrange(int start, int end){
    
    int *tmp = malloc(sizeof(int) * (lenght(start, end)));
    if(tmp == NULL)
        return NULL;
    if(end > start){ // 1 7
        int i = 0;
        int n = end;
        while(i <= end - start){
            tmp[i] = n;
            n--;
            i++;
        }
    }
    else if(start > end){
        int i = 0;
        int n = end;
        while(i <= (start - end)){
            tmp[i] = n;
            n++;
            //printf("tmp ==> %d\n", tmp[i]);
            //printf("tmp ==> %d\n", n);
            i++;
        }
    }
    else if(start == 0 && end == 0){
        tmp[0] = 0;
        return tmp;
    }
    return tmp;
}
int main(void){
    int start = 1;
    int end = 3;
    int *r = ft_rrange(start, end);
    int i = 0;
    while(i <= lenght(start , end)){
        printf("%d\n", r[i]);
        i++;
    }
    free(r);
}