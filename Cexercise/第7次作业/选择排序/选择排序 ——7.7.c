#include<stdio.h>
int main (void)
{
    int n=1,j,i,temp;
    int q;
    int a[21];
    while(n!=0){
            scanf("%d",&n);
            if(n!=0){
     for (i=0;i<n;i++){
                scanf("%d",&a[i]);
    }
     for (i=1;i<n;i++){
        q=1;
        for (j=0;j<n-1;j++){
            if (a [j]>a [j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                q=0;
            }
        }
        if(q==1){
            break;
        }
     }
     for (i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
    }
    else
        break;
    }
    return 0;
}
