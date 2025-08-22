#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}
int main(void){
    char  i =  '0';
    char j = '9';
    while(j >= i){
        ft_putchar(j);
        j--;
    }
    ft_putchar('\n');
}