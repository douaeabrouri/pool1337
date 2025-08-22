#include <unistd.h>

int lenght(char *str){

    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

int main(int ac, char** av){

    if(ac == 2){
        int k = lenght(av[1]) - 1;
        while(k >= 0){
            write(1, &av[1][k], 1);
            k--;
        }
    }
    write(1, "\n", 1);
}