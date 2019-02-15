#include<stdio.h>
int main (void)
{
    int n,i,G;
    while (scanf("%d",&n)==1)
    {int number[n];
    if(n==0)
        break;
    if((n<=2)&&(n!=0))
        printf("Error!\n\n");

    if(n>=3)
    {
        for (i=2;i<=n;i++)
        {
            number[0]=1;
            number[1]=1;
            number[i]=number[i-1]+number[i-2];
        }
        for(i=0;i<n;i++)
            {
                printf("%10d",number[i]);
                if((i+1)%8==0)
                    printf("\n");
            }
        if((n%8)==0)
            printf("\n");
        else
            printf("\n\n");
    }
    }
    return 0;
}
