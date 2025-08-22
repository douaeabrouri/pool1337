#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list{
    struct s_list *next;
    void    *data;
}t_list;

int	ft_list_size(t_list *begin_list){
    int size = 0;
    t_list *tmp = begin_list;
    while( tmp  != NULL){
            size++;
            tmp = tmp ->next;
    }
    return size;
}

int main(void)
{

    t_list *node = malloc(sizeof(t_list));
    int a = 0;
    node -> data = &a;
    t_list *node2 = malloc(sizeof(t_list));
    char *str = "";
    node2 -> data = &str;
    t_list *node3 = malloc(sizeof(t_list));
    char *str1 = "";
    node3 -> data = &str1;

    node -> next = node2;
    node2 -> next = node3;
    node3 -> next = NULL;

    printf("%d\n", ft_list_size(node));

}
