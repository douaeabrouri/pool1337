#include <unistd.h>
#include <limits.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putnbr(int nb){

    if(nb == INT_MIN){
        write(1, "-2147483648", 1);
        return ;
    }
    if(nb <0){
        write(1, "-", 1);
        nb = nb*(-1);
    }
    if(nb <= 9){
        ft_putchar(nb + '0');
    }
    if(nb >= 10){
        ft_putchar((nb%10) + '0');
        ft_putnbr(nb/10);
    }


}

int main(void){
    int  number = 1;
    while(number <= 100){
        if(number % 5 == 0 && number % 3 == 0){
            write(1, "fizzbuzz\n", 9);
        }
        else if(number % 3 == 0){
            write(1, "fizz\n", 5);
        }
        else if(number % 5 == 0){
            write(1, "buzz\n", 5);
        }
        else{
            ft_putnbr(number);
            write(1, "\n", 1);
        }
        number++;
    }
}