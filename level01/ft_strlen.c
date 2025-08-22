#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;

}

int main(void){
    char str[10] = "123456789"; 
    printf("%ld\n", strlen(str));
}
