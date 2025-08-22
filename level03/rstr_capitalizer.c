#include <unistd.h>

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_lowercase(char c){

    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    return c;
}

char  to_uppercase(char c){

    if(c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}

int whitespace(char c){
     if(c == ' ' || c == '\t' || c == '\0')
        return 0;
    return 1;
}

void print(char *str)
{
    int i = 0;
    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
        {
            write(1, &str[i], 1);
            i++;
        }
        int start = i;
        while(str[i] != ' ' && str[i] != '\t' && str[i])
            i++;
        int end = i - 1;
        int j = start;
        while(j <= end)
        {
            if(j == end && is_letter(str[j]))
            {
                str[j] = to_uppercase(str[j]);
            }
            else 
                str[j] = to_lowercase(str[j]);

            write(1, &str[j], 1);
            j++;
        }
    }
}

int main(int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "\n", 1);
        return 0;
    }    
    int i = 1;
    while(i < ac)
    {
        print(av[i]);
        write(1, "\n", 1);
        i++;
    }
}