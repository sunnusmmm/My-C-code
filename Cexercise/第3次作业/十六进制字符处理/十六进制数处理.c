#include<stdio.h>
int main (void)
{
    int n,i;
    char ch;
    scanf("%d",&n);
    getchar();
    char name[n];
    for (i=0;i<n;i++)
    {
        scanf("%c",&name[i]);
        getchar();
        if ((name [i]<='f')&&(name [i]>='a'))
            {printf("%d\n",name [i]-87);}
        else if ((name [i]<='F')&&(name [i]>='A'))
            {printf("%d\n",name[i]-55);}
        else if ((name [i]<='9')&&(name [i]>='0'))
            {printf("%c\n",name [i]);}
        else
            {printf("%d\n",name [i]);}

    }
    return 0;

}
