#include <unistd.h>
#include <stdio.h>


int len(char *str){
    int i = 0;
    while(str[i])
    i++;
    return i;
}
int whitespace(char c){
    if(c == '\t' || c == ' '){
        return 1;
    }
    return 0;
}
int foundlastchar(char *str){
    int lastindex = len(str) - 1;
    while(lastindex >= 0){
        if(whitespace(str[lastindex]) == 1)
            lastindex--;
        else
            break;
    }
    return lastindex;
}

int foundfirstchar(char *str){
    int i =0;
    while(str[i]){
        if(whitespace(str[i]) == 0)
            break;
        i++;
    }
    return i;
}



int main(int ac, char** av){
    if(ac != 2){
        write(1, "\n", 1);
        return 0;
    }
    int i = foundfirstchar(av[1]);
    int counter = 1;
    int lastindex = foundlastchar(av[1]);
    printf("%d\n", lastindex);
    while(i <= lastindex){
        //if(whitespace(av[1][i]) == 1 && (i == len(av[1])))
            
        if(av[1][i] != '\0' && whitespace(av[1][i]) == 0){
            write(1, &av[1][i], 1);
            counter = 0;
        }
        else if(av[1][i] != '\0' && whitespace(av[1][i]) == 1 && counter == 0){
            write(1, " ", 1);
            counter = 1;
        }
        i++;
    }
    write(1, "\n", 1);
}