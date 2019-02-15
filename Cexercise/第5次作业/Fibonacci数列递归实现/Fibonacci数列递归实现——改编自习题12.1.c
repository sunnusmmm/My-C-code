#include<stdio.h>
#define SIZE 40
int main (void)
{
   int n,i;
   int rnumber(int n);
   while (scanf("%d",&n) !=EOF)
   {
       if(n<3)
       {
           printf("%d\n",1);
       }
       else
       {
          printf("%d\n",rnumber(n));
       }

   }
   return 0;
}

int rnumber(int n)
{
    int ans;
    if(n>2)
        ans=rnumber(n-1)+rnumber(n-2);
    else
        ans=1;

    return ans;
}
