#include<stdio.h>
#define N 10
void sort (int *p, int n);
int main (void)
{
    int x[N], i;
    while(scanf("%d", &x[0]) !=EOF)
    {
    for (i=1; i<N; i++)
        scanf("%d", &x[i]);
    sort (x, N);
    }
    return 0;
}
void sort (int *p, int n)
{
    int i, j, t, k;
    for (i=0;i<n; i++){
    for (j=0; j<n-i-1; j++)
        if (*(p+j)>*(p+j+1)){
        t=*(p+j);
        *(p+j)=*(p+j+1);
        *(p+j+1)=t;
        }
    }
    for (k=0;k<n-1; k++)
            printf("%d->", *(p+k));
            printf("%d\n",*(p+k));
}
