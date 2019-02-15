#include<stdio.h>
int main (void)
{
char ch;
double n,b,c;
int t;
   while(scanf("%d %lf %lf %c",&t,&b,&c,&ch) !=EOF)
   {if (ch == '+')
        {
            n = b + c;
        }
    else if (ch == '-')
       {
           n = b - c;
       }
    else if (ch == '*')
    {
        n = b * c;
    }
    else
    {
        n = b / c;
    }
    switch( t )
    {
        case 0:printf("After if-else processing,the result is : %.2f\n\n",n);
               break;
        case 2:printf("After if-else processing,the result is : %.2f\n",n);
               printf("After switch processing,the result is : %.2f\n\n",n);
               break;
        case 1:printf("After switch processing,the result is : %.2f\n\n",n);
               break;
    }
   }
    return 0;
}
