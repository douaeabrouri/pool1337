#include <unistd.h>
#include <stdio.h>

int main(int ac, char** av){
    
    int i;
    if(ac == 2){
        i = 0;
        while(av[1][i]){
            char first  = 'a';
            if((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z')){
                int counter = 1;
                if(av[1][i] != first){
                    while(av[1][i] != first){
                        first++;
                        counter++;
                    }
                }
                while(counter > 0){
                        write(1, &av[1][i], 1);
                        counter--;
                }
                
            }
            else{
                write(1, &av[1][i], 1);
            }   
            i++;
        }    
    }
    write(1, "\n", 1);

}