#include<stdio.h>
#define Swap(x,y) ((x)=(y)+(x),(y)=(x)-(y),(x)=(x)-(y))
int main (void)
{
   int z;
   int x,y;
   int i=1;
   while((scanf("%d %d",&x,&y))!=EOF)
   {
       printf("Case %d:\n",i);
       printf("Before Swap:a=%d b=%d\n",x,y);
       Swap(x,y);
       i++;
       printf("After Swap:a=%d b=%d\n\n",x,y);
   }

   return 0;
}
