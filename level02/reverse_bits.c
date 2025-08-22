#include <stdio.h>

/*void writebits(unsigned char a){

    int i = 7;
    while(i >= 0){
        printf("%d", (a >> i) & 1);
        i--;
    }
    printf("\n");
}*/

/*unsigned char  reversebyte(unsigned char c){

    unsigned char result = 0;
    int i = 0;
    while(i < 8){
        result <<= 1;
        result = result | (c & 1);
        c >>= 1;
        i++;
    }
    return result;
}*/

/*int main(void){
    writebits(7);
    //writebits(reversebyte('A'));
}*/

void  print_bits(unsigned char octect)
{
    int i = 0;
    while(i <= 7){
        printf("%d", (octect >> i) & 1);
        i++;
    }
}
int main(void){
    print_bits('a');
}
