#include<stdio.h>
int main (void)
{
    int n,i=0;
    short a,b,h,f,g;
    int o,p;
    int number[6]={1,2,3,4,5,6};
    scanf("%d",&n);
    while(i<n)
        {
            i++;
            scanf("%hd %hd",&a,&b);
            o=a;p=b;
            int sum=0;
            do{sum+=o%10;
            o=o/10;}while(o!=0);
            if (sum<6)
                h=number[sum];
            else
            {
                sum=sum%6;h=number[sum];
            }
            sum=0;
            do{sum+=p%10;
            p=p/10;}while(p!=0);
            if (sum<6)
                f=number[sum];
            else
            {
                sum=sum%6;f=number[sum];
            }
            g=h+f;
            if ((g==7)||(g==11))
                printf("success!\n");
            else if(g==2||g==3||g==12)
                printf("fial!\n");
            else
            {
                sum=0;
                do{++a;++b;o=a;p=b;
                do{sum+=o%10;
            o=o/10;}while(o!=0);
            if (sum<6)
                h=number[sum];
            else
            {
                sum=sum%6;h=number[sum];
            }
            sum=0;
            do{sum+=p%10;
            p=p/10;}while(p!=0);
            if (sum<6)
                f=number[sum];
            else
            {
                sum=sum%6;f=number[sum];
            }
            sum=0;}while(g!=(f+h)&&(f+h)!=7);
            if((f+h)==7)
                printf("fail!\n");
            else if ((f+h)==g)
                printf("success!\n");
            }
         }

    return 0;
}
