#include <unistd.h>

int atoi(const char *str){
    int i = 0;
    int nb = 0;
    while(str[i] >= '0' && str[i] <= '9'){
        nb = nb * 10;
        nb = nb + (str[i] - 48);
        i++;
    }
    return nb;
}

void printf_hex(int nb)
{
    char *str = "0123456789ABCDEF";
    if(nb >= 16)
        printf_hex(nb/16);
    write(1, &str[nb % 16], 1);
}

int main(int ac, char **av){
    if(ac != 2){
        write(1, "\n", 1);
        return 0;
    }
    else if(atoi(av[1]) >= 0){
        printf_hex(atoi(av[1]));
    }
    write(1, "\n", 1);

}