#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2){

    int i = 0;
    while(s2[i] != '\0'){
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return s1;
}

int main(void){
    char s2[100] ="douaekdjfkq";
    char s1[100] = "abrouri";
    printf("%s\n", ft_strcpy(s1, s2));
    printf("%s\n", strcpy(s1, s2));
}