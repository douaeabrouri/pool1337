#include <unistd.h>

int main(int ac, char** av){
    
    if(ac == 1){
        write(1, "a", 1);
        write(1, "\n", 1);
    }
    else if(ac > 2 )
        write(1, "\n", 1);
    else if(ac == 2){
        int i;
        i = 0;
        while(av[1][i] != '\0'){
            if(av[1][i] == 'a'){
                write(1, "a\n", 1);
                break;
            }
            i++;
        }
        write(1, "\n", 1);
    }
}