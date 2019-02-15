#include<stdio.h>
int main (void)
{
    enum month {January=31,February=28,March=31,April=30,May=31,June=30,July=31,August=31,September=30,October=31,November=30,December=31};
    int year;
    scanf("%d",&year);
    if( (year%4) && (year%400))
       {
        printf("January,31\nFebruary,28\nMarch,31\nApril,30\nMay,31\nJune,30\nJuly");
        printf(",31\nAugust,31\nSeptember,30\nOctober,31\nNovember,30\nDecember,31\n");
       }
    else
       {
        printf("January,31\nFebruary,29\nMarch,31\nApril,30\nMay,31\nJune,30\nJuly,");
        printf("31\nAugust,31\nSeptember,30\nOctober,31\nNovember,30\nDecember,31\n");
       }
    return 0;
}
