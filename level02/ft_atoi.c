#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_atoi(const char *str){

    int sign = 1;
    int i =0;
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

int main(void){
    char str[10] = "---1b23bc";
    printf("%d", ft_atoi(str));
    
}