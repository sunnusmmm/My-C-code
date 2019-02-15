#include<stdio.h>
void reverse (int *p , int k );
int main (void)
{
    int N,n,i,h;
    scanf("%d",&N);
    for(h=0;h<N;h++){
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++){
            scanf("%d",&x[i]);
    }
     reverse (x , n );
     for(i=0;i<n-1;i++){
     printf("%d ",x[i]);
     }
     printf("%d\n",x[i]);
    }
}
void reverse (int *p , int k )
{
    int temp,i=0;
    while (i<k){
    temp=p[i];
    p[i]=p[k-1];
    p[k-1]=temp;
    i++;
    k--;
    }
}
