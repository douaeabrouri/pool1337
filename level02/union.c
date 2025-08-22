#include <unistd.h>
#include <stdio.h>

int check(char *str, char c, int index){

    int i = 0;
    int counter = 0;
    while(i < index){
        if(str[i] == c)
            counter++;
        i++;
    }
    return counter;
}

int main(int ac, char** av){

    if(ac == 3){
        int i = 0;
        while(av[1][i]){ 
            if(!check(av[1], av[1][i], i)){
                write(1, &av[1][i], 1);
            }
            i++;   
        }     

        int j = 0;
        while(av[2][j]){
            if(!check(av[1], av[2][j], i) && !check(av[2], av[2][j], j)){
                write(1, &av[2][j], 1);
            }
            j++;
        }
    }
    write(1, "\n", 1);

}