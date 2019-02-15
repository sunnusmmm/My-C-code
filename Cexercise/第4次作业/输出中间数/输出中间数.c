#include<stdio.h>
int main (void)
{
    int a,b,c;
    int h,f;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        h=(a < b ? b : a);
        f=(a < b ? a : b);
    if (h<c)
    {
        if(h==a)
             printf("A:%d\n",h);
        else
            printf("B:%d\n",h);
    }
    else
        {
            if((f < c ? c : f)==a)
                printf("A:%d\n",(f < c ? c : f));
            else if ((f < c ? c : f)==b)
                printf("B:%d\n",(f < c ? c : f));
            else if((f < c ? c : f)==c)
                printf("C:%d\n",(f < c ? c : f));
        }
        }


    return 0;
}

