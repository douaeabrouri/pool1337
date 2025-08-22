#include <stdio.h>
#include <string.h>

/*int len(char *str)
{
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}
int ft_strcmp(char *s1, char *s){
    int i = 0;
    while(i < len(s1) || i < len(s)){
        if(s1[i] != s[i]){
            return s1[i] - s[i];
        }
        i++;
    }
}*/
 
int strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
int main(void){
    char s1[100] = "";
    char s2[100] = "";
    printf("%d\n", strcmp(s1, s2));
     printf("%d\n", ft_strcmp(s1, s2));

}