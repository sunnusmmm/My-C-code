#include <stdio.h>
#include <string.h>
struct Web
{
    char SHORT[20];
    char NAME[40];
    char URL[60];
};
int main (void)
{
    int n;
    scanf("%d", &n);
    struct Web s[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %s",s[i].SHORT, s[i].NAME, s[i].URL);
    }
    for (i = 0; i < n; i++)
    {
        printf("%-20s%-40s%s\n",s[i].SHORT, s[i].NAME, s[i].URL);
    }
    printf("\n");
    struct Web temp;
    int k;
    for (i = 0; i < n-1; i++)
    {
        for (k = 0; k < n-1; k++)
        {
            if (strcmp(s[k].SHORT, s[k+1].SHORT) > 0)
            {
                temp = s[k];
                s[k] = s[k+1];
                s[k+1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%-20s%-40s%s\n",s[i].SHORT, s[i].NAME, s[i].URL);
    }
    return 0;
}
/*char aim[20];
    printf("please input abbr of the aim:\n");
    scanf("%s", aim);
    for (i=0;i<N-1;i++)
    {
        if(strcmp(aim,s[i].SHORT)==0)
            {
                printf("%-20s %-40s %s\n",s[i].SHORT, s[i].NAME, s[i].URL);
                break;
            }
        else if (strcmp(aim,s[i].SHORT) < 0)
            printf("NO FOUND!");
        else if (strcmp(aim,s[i].SHORT) > 0)
            continue;
    }
    return 0;
}*/
