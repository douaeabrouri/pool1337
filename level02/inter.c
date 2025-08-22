#include <unistd.h>

int check(char* str, char c, int index){
    int i = 0;
    int counter = 0;
    while(i < index){
        if(str[i] == c){
            counter++;
        }
        i++;
    }
    return counter;
}
int main(int ac, char **av){

    if(ac == 3){
        int i = 0;
        while(av[1][i]){
            int j = 0;
            while(av[2][j]){
                if(av[1][i] == av[2][j] && check(av[1] , av[1][i], i) == 0){
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;                   
            }
            i++;
        }
    }
    write(1, "\n", 1);
}