#include<stdio.h>
int main(void)
{
    int i,n=1, m, h,j;
    char x[10][100];
    char (*p)[100],(*k)[100];
    p=x;
    k=x;
    while(1)
    {
        scanf("%d",&n);
        getchar();
        if (n==0)
            break;
        for(i=0; i<n; i++)
        {
              j=0;
            while((x[i][j]=getchar())!='\n') j++;
            x[i][j]='\0';
        }
        h=0;
        for (i=0; i<n; i++)
        {
        m=0;
        while(1)
        {
            *(*k+h)=*(*(p+i)+m);
            m++;
            h++;
            if(*(*(p+i)+m) =='\0')
                break;
        }
        }
        *(*k+h)='\0';
        printf("%s\n",x[0]);
    }
    return 0;
}
