#include<stdio.h>
#define size 10
int main (void)
{
    int t,n,i,m;
    int h;
    int number [size];
    double G,averages;
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        h=0;
        G=0;
        scanf("%d",&t);
        for (m=0;m<size;m++)
        {
            scanf("%d",&number[m]);
        }
        for (m=0;m<size;m++)
        {
            if (number[m]>=0)
                {
                    G+=number[m];
                    h+=1;
                }
                else
                {
                    G=G;
                    h=h;
                }

        }
        i+=1;
        averages=G/h;
        if(h ==  0)
          continue;
    switch( t )
      {
         case 0 :printf("In \"continue\" way,numbers=%d,average=%.6f\n",h,averages);
         break;
         case 1 :printf("In \"no continue\" way,numbers=%d,average=%.6f\n",h,averages);
         break;
      }
    }
      return 0;
}
