
/*#include <stdio.h>
#include <stdlib.h>
struct String {
    char ch;
    struct String *next; };
    void create(struct String ** head);
    void shuchu(struct String *head);
    void cucun(struct String *head);
int main(void)
{
    struct String *head = NULL;
    create(&head);
    shuchu(head);
    cucun(head);
    return 0;
}
void create(struct String ** head)
{
    struct String *current = NULL;
    struct String *previous = NULL;
    while( 1 )
    {
        current = (struct String*)malloc(sizeof(struct String));
        if (*head == NULL)
        {
            *head = current;
        }
        if (previous != NULL)
            previous->next = current;
        previous = current;
        current->next = NULL;
        scanf("%c", &current->ch);
        if (current->ch == '#')
        {
            current->ch = '\0';
            current->next = NULL;
            break;
        }
    }
}
void shuchu(struct String *head)
{
    while (head != NULL)
    {
        printf("%c", head->ch);
        head = head->next;
    }
    printf("\n\n");
}
void cucun(struct String *head)
{
    int h;
    struct String *temp = head;
    for(h = 1; temp->next != NULL; h++)
    {
        temp = temp->next;
    }
    char s[h];
    int i;
    for ( i = 0; i < h; ++i)
    {
        s[i] = head->ch;
        head = head->next;
    }
    for ( i = 0; i < h; ++i)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}*/


#include <stdio.h>
#include <stdlib.h>
struct string {
    char ch;
    struct string *next;
};
void create_list(struct string **headp);
int main(void)
{
    struct string *head=NULL, *p;
    int i=0, n;
    char *s;
    create_list(&head);
    p = head;
    while (p) {
        printf("%c", p->ch);
        p = p->next;
        i++;
    }
    printf("\n\n");
    p = head;
    s = malloc((i + 1) * sizeof(char));
    for (n = 0; n < i; n++) {
        s[n] = p->ch;
        p = p->next;
    }
    s[i] = '\0';
    printf("%s\n", s);
    return 0;
}
void create_list(struct string **headp) {
    struct string *tail, *temp;
    char ch;
    tail = malloc(sizeof(struct string));
    *headp = tail;
    if ((tail->ch = getchar()) != '#') {
        while ((ch = getchar()) != '#') {
            temp = malloc(sizeof(struct string));
            tail->next = temp;
            temp->ch = ch;
            tail = temp;
        }
        tail->next = NULL;
    }
    else
    {
        tail->ch='\0';
        tail->next = NULL;
    }
}
