#include <unistd.h>
 
int main(){
    char i = 'a';
    char j = 'z';
    while(i <= j){
        if(i % 2 == 0){
            char c = i - 32;
            write(1, &c, 1);
            i++;
        }
        else if(i % 2 != 0){
            write(1, &i, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}