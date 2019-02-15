#include<stdio.h>
struct date {
    int year;
    int month;
    int day;
}a[50];
int main (void)
#define size 12
{
    int N,days,k;
    int jun[size]={31,29,31,30,31,30,31,31,30,31,30,31};
    int junn[size]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    scanf("%d", &N);
    for (k=0; k<N; k++)
    {
        scanf("%d%d%d", &a[k].year, &a[k].month, &a[k].day);
    if  (((a[k].year%4 == 0) && (a[k].year%100 != 0))|| (a[k].year%400 == 0))
     {
         if(a[k].month == 1)
            {
                days=a[k].day;
                printf("%d\n", days);
            }
        else
        {
            days=0;
            for(i=0; i<(a[k].month-1); i++)
            {
                days=days+jun[i];
            }
            days += a[k].day;
            printf("%d\n", days);
            }
     }
     else
     {
         if(a[k].month==1)
         {
             days=a[k].day;
             printf("%d\n", days);
         }
         else
         {
             days=0;
            for(i=0;i<(a[k].month-1);i++)
            {
                days=days+junn[i];
            }
            days+=a[k].day;
            printf("%d\n", days);
         }
     }
     }

    return 0;
}
