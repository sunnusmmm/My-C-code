#include<stdio.h>
int main (void)
{
    int a,n,m;
    m=sizeof(int)*8;
    scanf("%d %d",&a,&n);
    printf("%d\n",((a>>n)|(n<<(m-n))));

    return 0;
}
