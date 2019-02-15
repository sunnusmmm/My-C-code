#include<stdio.h>
void change ( int * s, int n, int k);
int main (void)
{
    int i,m=0,j;
    int n,k,h;
    int s[60];
    int temp;
    while(scanf("%d %d",&n,&k)!=EOF){
    for(i=0;i<n;i++){
            scanf("%d",&s[i]);
        }
        int * p;
        p=s;
        change (p, n, k);
        for(i=0;i<n-1;i++){
        printf("%d ",s[i]);
    }
    printf("%d",s[n-1]);
    printf("\n");
    }
}
void change ( int * s, int n, int k)
{
    int i,h;
    int temp;
    for (i=0;i<(n-k);i++){
        for (h=n-1;h>0;h--){
            temp=s[h-1];
            s[h-1]=s[h];
            s[h]=temp;
        }
    }
}
