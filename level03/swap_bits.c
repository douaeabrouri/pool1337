#include <unistd.h>
#include <stdio.h>

void writebits(unsigned char a){

    int i = 7;
    while(i >= 0){
        printf("%d", (a >> i) & 1);
        i--;
    }
    printf("\n");
}

unsigned char swapbits(unsigned char octect)
{
    return(octect << 4 | octect >> 4);
}

int main(void){
    writebits(swapbits(0b11000011));
}