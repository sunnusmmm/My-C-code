#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int a,b;
    int h,f,r,m;
    scanf("%d %d",&a,&b);
    while((a!=0)&&(b!=0))
       {h=(a < b ? b : a);
        f=(a < b ? a : b);
        r=h%f;
    if(r==0)
       {m=h;
       printf("%d %d\n",f,m);
       scanf("%d %d",&a,&b);}
       else
        {while(r!=0)
       {
           h=f;
           f=r;
           r=h%f;
       m=f*(a/f)*(b/f);
       }printf("%d %d\n",f,m);
       scanf("%d %d",&a,&b);}
       }


    return 0;
}
