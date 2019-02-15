#include<stdio.h>
int main (void)
{
    double g,h,f,n,m,x;
    g=1e-5;
    n=1;
    m=1;
    f=1;
    x=1;
    while ((f<=-g)||(f>=g))
    {
        x=-x;
        m=m+2;
        f=x/m;
        n=n+f;
    }

    printf("%.9f\n",n*4);
    return 0;
}
