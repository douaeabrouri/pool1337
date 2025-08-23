#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int is_sep(char c, char *charset)
{
    int index = 0;
    while(charset[index])
    {
        if(charset[index] == c)
            return (1);
        index++;
    }
    return (0);
}

int count_word(char *str, char *charset)
{
    int index = 0;
    int count_word = 0;
    int flag = 0;
    while(str[index])
    {
        if(is_sep(str[index], charset))
        {
            flag = 0;
        }
        else if( flag == 0)
        {
            flag = 1;
            count_word++;
        }
        index++;
    }
    return (count_word);
}

char *ft_strdup(char *start, int len)
{
    char *tmp = (char *)malloc(sizeof(char) * (len + 1));

    if(tmp == NULL)
        return NULL;
    int index = 0;
    while(index < len)
    {
        tmp[index] = start[index];  
        index++;
    }
    tmp[index]='\0';
    return (tmp);
}

char **ft_split(char *str, char *charset)
{
    int word_nbr = count_word(str, charset);
    char **tmp = (char **)malloc(sizeof(char *) * (word_nbr + 1));

    int index = 0;
    int i = 0;
    while(str[index])
    {
        while(is_sep(str[index], charset) && str[index])
            index++;

        char *start = &str[index];
        int len = 0;
        while(!is_sep(str[index], charset) && str[index]){
            index++;
            len++;
        }

        if(len > 0)
        {
            tmp[i] = ft_strdup(start, len);
            i++;
        }
    }
    tmp[i] = NULL;
    return (tmp);
}

int main()
{
	char **words = ft_split("hello,,world:1337", ",:");

	for (int i = 0; words[i]; i++)
	{
		write(1, words[i], strlen(words[i]));
		write(1, "\n", 1);
		free(words[i]);
	}
	free(words);
}
