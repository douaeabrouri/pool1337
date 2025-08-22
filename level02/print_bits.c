#include <unistd.h>

void    print_bits(unsigned char octet){
    int i = 7;
    int  result = 0;
    unsigned char c;
    while(i >= 0){
        result = (octet >> i) &  1;
        c = result + 48;
        write(1, &c, 1);
        i--;
    }
    write(1, "\n", 1);
}
int main(void){
    print_bits(2);
}