#include <unistd.h>
#include <stdio.h>

int len(char *str)
{
    int len;

    len = 0;
    while(str[len])
    {
        len++;
    }
    return len;
}

char *reverse(char *str)
{
    int i = len(str) - 1;
    int j = 0;
    char c;
    while(i > j)
    {   
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        j++;
        i--;
    }
    return str;
}

int main(void){
    char str[100] = "hollywood";
    printf("%s\n", reverse(str));
}