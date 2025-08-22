#include <stdio.h>

unsigned int lcm(unsigned a, unsigned b)
{
    unsigned d = 0;
    if(a == 0 || b == 0)
        return 0;
    else if(a > b)
        d = (a / b) + 1;
    else    
        d = (b / a) + 1;
    while(!((a % d) == 0) && (b % d) == 0){
        printf("d = %i\n", d);
        d--;
    }

    return ((a*b) / d);
}

int main(void)
{
    printf("%i\n", lcm(7, 5));
}