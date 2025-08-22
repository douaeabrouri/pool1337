#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int len(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}

int main(int ac, char** av){
    if(ac != 4){
        write(1, "\n", 1);
        return 0;
    }
    char c = av[2][0];
    if(len(av[2]) == 1){
        int val = 0;
        if(c == '*'){
            val = atoi(av[1]) * atoi(av[3]);
        }
        else if(c == '-'){
            val = atoi(av[1]) - atoi(av[3]);
        }
        else if(c == '+'){
            val = atoi(av[1]) + atoi(av[3]);
        }
        else if(c == '/' && atoi(av[3] ) != 0){
            val = atoi(av[1]) / atoi(av[3]);
        }
        else if(c == '%'){
            val = atoi(av[1]) % atoi(av[3]);
        }    
        printf("%d\n", val);  
    }
    write(1, "\n", 1);
}