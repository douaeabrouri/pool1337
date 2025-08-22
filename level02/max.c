#include <unistd.h>
#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int max(int *tab, unsigned  int len){

    if (len == 0)
        return 0;
    int i = 1;
    int max = tab[0];
    while(i <= len){
        if(tab[i] > max)
           max = tab[i];
        i++;
    }
    return max;
}

int main(void){
    int tab[5] = {1, 20, 30 ,0, 50};
    printf("%d\n", max(tab, 4));
}