#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char** av){    
    if(ac != 3|| atoi(av[1]) < 0 || atoi(av[2]) < 0){
        write(1, "\n", 1);
        return 0;
    }
    int i = 1;
    int index = 0;
    int *tmp = malloc(sizeof(int) * 100);
    while(i <= atoi(av[1]) && i <= atoi(av[2])){
        if(atoi(av[1]) % i == 0 && atoi(av[2]) % i == 0){
            tmp[index] = i;
            index++;// i can also write tmp[index++] = i
        }
        i++;
    }
    printf("%d\n", tmp[index - 1]);

    free(tmp);
    
}