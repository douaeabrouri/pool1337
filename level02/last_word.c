#include <unistd.h>

int lenght(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

void writestr(char *str, int index){

    while(str[index]){
        if(str[index] != '\t' && str[index] != ' ' && str[index] != 0){
            write(1, &str[index], 1);
            index++;
        }
        else if(str[index] == '\t' || str[index] == ' ' || str[index] == 0)
            break;
    }

}


#include <stdio.h>
int main(int ac, char** av){

    if(ac == 2){
        int len  = lenght(av[1])-1;
        int counter = 0;
        while(0 <= len){
            if(av[1][len] != '\t' && av[1][len] != ' '){
                counter++;
            }
            else if(av[1][len] == '\t' || av[1][len] == ' '){
                if(counter != 0)
                break; 
            }
            len--;
        }
        writestr(av[1], len + 1);
        write(1, "\n",1);
    }
}


















































