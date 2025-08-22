#include <unistd.h>

int  main(int ac, char** av){
    char i = 'a';
    char j = 'z';
    int count = 1;
    while( j >= i){
        if(count % 2 == 0){
            char c = j - 32;
            write (1, &c, 1);
        }
        else if(count % 2 != 0){
            write (1, &j, 1);
        }
    count++;
    j--;
    }
    write(1, "\n", 1);
}