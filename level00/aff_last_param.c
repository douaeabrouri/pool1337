#include <unistd.h>

int main(int ac, char** av){
    
    int i ;
    int c ;
    if(ac > 2){
        i = 0;
        c = ac - 1;
        while(av[c][i] != '\0'){
            write(1, &av[c][i], 1);
            i++;
        }
    }
    else if(ac == 2){
        int i = 0;
        while(av[1][i] != '\0'){
            write(1, &av[1][i], 1);
            i++;
        }
    }
    
    write(1, "\n", 1);
}