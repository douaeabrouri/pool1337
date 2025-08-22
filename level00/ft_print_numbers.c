#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void    ft_print_numbers(void){
    char i = '0';
    char j = '9';
    while(j >= i){
        ft_putchar(i);
        i++;
    }
}
/*int main(void){
    ft_print_numbers();
    ft_putchar('\n');
}*/