#include<stdio.h>
int main (void)
{
    int a[12],i,l=0;
    for(i=0;i<12;i++)
        a[i]=0;
    int w=0;char m;
    while((m=getchar())!='#')
    {
        if(m=='0')
        a[0]++;
        else if (m=='1')
        a[1]++;
        else if (m=='2')
        a[2]++;
        else if (m=='3')
        a[3]++;
        else if (m=='4')
        a[4]++;
        else if (m=='5')
        a[5]++;
        else if (m=='6')
        a[6]++;
        else if (m=='7')
        a[7]++;
        else if (m=='8')
        a[8]++;
        else if (m=='9')
        a[9]++;
        else if((('a'<=m)&&(m<='z'))||(('A'<=m)&&(m<='Z')))
        l++;
        else
        w++;
    }
    for (i=0;i<10;i++)
         printf("Number %d: %d\n",i,a[i]);
         printf("characters: %d\nother: %d\n",l,w);

    return 0;
}
