#include <unistd.h>

int main(int ac, char** av){
    
    if(ac == 2){
        int i = 0;
        int counter = 0;
        while(av[1][i]){
            if(av[1][i] != ' ' && av[1][i] != '\t'  && av[1][i] != '\0'){
                counter += 1;
                write(1, &av[1][i], 1);
            }
            else if(av[1][i] == ' ' ||  av[1][i] == '\t' || av[1][i] == 0)
            {
                if(counter != 0)
                    break;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}