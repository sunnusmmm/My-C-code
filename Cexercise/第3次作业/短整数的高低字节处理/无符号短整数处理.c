#include<stdio.h>
int main (void)
{
    int N,i;
    unsigned int n=sizeof(unsigned short)*8;
    scanf("%d",&N);
    int name [N];
    for (i=0;i<N;i++)
    {
        scanf("%d",&name[i]);
    }

    for (i=0;i<N;i++)
    {unsigned short v,h;
       v = ( name[i]<<(n-4)) & 0xf000;
       h = ( name[i]>>(n-4)) & 0x000f;
       name[i]=(name[i]&0x0ff0);
       name[i]=v|h|name[i];
       printf("%d\n",name[i]);
    }

    return 0;

}
