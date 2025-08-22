#include <unistd.h>
#include <stdio.h>

int len(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

int main(int ac, char** av){
    if(ac != 3 || len(av[1]) > len(av[2])){
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    int j = 0;
    int counter = 0;
    while(av[1][i]){
        while(av[2][j]){
            if(av[1][i] == av[2][j]){
                counter++;
                i++;
            }
            j++;
        }
        i++;
    }
    if(counter == len(av[1])){
        write(1, "1\n", 2);
        return 1;
    }
    write(1, "0\n", 2);
    return 0;
}