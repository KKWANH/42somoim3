#include <stdio.h>
#include <stlib.h>

typedef struct t_list
{
    char chac;
    s_list *prev;
    s_list *next;
}s_list;

int main(void)
{
    s_list *head;
    s_list *cur;
    char c;
    int i, j;
    
    head = (s_list *)malloc(sizeof(s_list));
    head->data = '0';
    head->prev = NULL;
    head->next = NULL;
    cur =  head;
    while (c = getchar() != '\n')
    {
        s_list temp;
        temp = (s_list)malloc(sizeof(s_list));
        temp->data = c;
        temp->prev = cur;
        temp->next = NULL;
        cur->next = temp;
        cur = temp;
    }
    scanf("%d", &i);
    j = -1;
    while (++j < i)
    {
        scanf(" %c", &c);
        switch (c)
        {
            case 'L' :
            {
                if (cur->prev)
                    cur = cur->prev;
            }
            case 'D' :
            {
                if (cur->next)
                    cur = cur->next;
            }
            case 'B' :
            {
                if (!cur->prev)
                    continue;
                s_list *del;
                del = (s_list *)malloc(sizeof(s_list));
                del = cur;
                cur = del->prev;
                if (del->next)
                {
                    cur->next = del->next;
                    del->next->prev = cur;
                    del->prev = NULL;
                }
                else
                    cur->next = NULL;
                free(del);
            }
            case 'P' :
            {
                char c1;
                scanf(" %c", &c1);
                s_list *new;
                new = (s_list *)malloc(sizeof(s_list));
                new->data = c1;
                new->prev = cur;
                if (cur->next)
                {
                    new->next = cur->next;
                    cur->next->prev = new;
                }
                else
                    new->next = NULL;
                cur->next = new;
                cur = cur->next;
            }
        }
    }
    head = head->next;
    while (head)
    {
        printf("%c",head->data);
        head = head->next;
    }
}