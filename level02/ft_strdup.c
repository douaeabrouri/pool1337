#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lenght(char *src){
    int i = 0;
    while(src[i])
        i++;
    return i;
}

char *ft_strdup(char *src){

    char *tmp = (char *)malloc(sizeof(char)*(lenght(src)+1));

    if(tmp == NULL)
        return NULL;
        
    tmp[lenght(src)] = '\0';
    int c = lenght(src) - 1;
    while(c>=0){
            tmp[c] = src[c];
            c--;
    }
    return tmp;
}

int main(void){
    char res[10] = "ana hdqhr6" ;
    printf("%s\n", ft_strdup(res));
}