#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void    putnbr(int nb){
    if(nb <= 9){
        nb += 48;
        write(1, &nb, 1);
    }
    else if(nb >= 10){
        putnbr(nb / 10);
        ft_putchar((nb%10) + 48);
    }
} 

int atoi(const char *str){
    int sign = 1;
    int i = 0;
    while(str[i] >= 9 && str[i] <= 13)
        i++;

    while(str[i] == '-' || str[i]== '+'){
        if(str[i] == '-')
            sign = sign * (-1);
        if(str[i] == '+')
            sign = sign * (1);
        i++;
    }
    int nb = 0;
    while(str[i] >= '0' && str[i] <= '9'){
        nb = nb * 10;
        nb = nb + (str[i] - 48);
        i++;
    }
    return sign *nb;
}

int is_prime(int nb){

    if (nb > 1){
        int i = 2;
        while(i < nb){
            if(nb % i == 0)
                return 0;
            i++;
        }
        return 1;
    }
    else if(nb == 1 || nb == 0){//0prime?
        return 0;
    }
}

int main(int ac, char **av){
    
    if(ac != 2 || atoi(av[1]) < 0){
        write(1, "0\n", 2);
        return 0;
    }
    int i = 2;
    int counter = 0;
    while(i <= atoi(av[1])){
        if(is_prime(i) == 1){
            counter += i;
        }
        i++;
    }
    putnbr(counter);   
    ft_putchar('\n');
}