#include<stdio.h>
int main (void)
#define size 12
{
    int man[size]= {31,29,31,30,31,30,31,31,30,31,30,31};
    int weman[size]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int i,n,h,g;
    while(scanf("%d %d %d",&n,&h,&g)!=EOF)
    {
        int days;
        if (((n%4) == 0)&&((n%100) !=0)||(n%400==0))
        {
            if(h==1)
            {
                days=g;
                printf("该日期是这一年中的第%d天\n",days);
            }
            else
            {
                days=0;
                for(i=0; i<(h-1); i++)
                {
                    days=days+man[i];
                }
                days+=g;
                printf("该日期是这一年中的第%d天\n",days);
            }
        }
        else
        {
            if(h==1)
            {
                days=g;
                printf("该日期是这一年中的第%d天\n",days);
            }
            else
            {
                days=0;
                for(i=0; i<(h-1); i++)
                {
                    days=days+weman[i];
                }
                days+=g;
                printf("该日期是这一年中的第%d天\n",days);

            }
        }
    }

    return 0;
}
