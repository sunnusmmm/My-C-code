#include<stdio.h>
int main (void)
{
    unsigned long long n,h;
    int k,i;
    int m;
    while(scanf("%llu %d",&n,&k)!=EOF)
    {
        h=n;
        m=0;
        while(n!=0)
    {
        m++;
        n=n/10;
    }
    if(m<k)
        printf("%d\n",-1);
    else
    {
        for(i=1;i<k;i++)
    {
        h=h/10;
    }
        h=h%10;
        printf("%llu\n",h);
    }
    }


    return 0;
}
