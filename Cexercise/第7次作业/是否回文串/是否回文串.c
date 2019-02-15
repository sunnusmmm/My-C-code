#include<stdio.h>
int number(char * s,int m);
int main (void)
{
    int N,i,h=0,m=0;
    char t;
    char *p;
    char s[60];
    scanf("%d",&N);
    getchar();
    for (i=0;i<N;i++){
            while((t=getchar())!='\n'){
                s[h]=t;
                h++;
            }
            p=s;
            if(number( p,h )==1)
                printf("Yes!\n");
            else if (number( p ,h)==0)
                printf("No!\n");
                h=0;
    }
    return 0;
}
int number(char * s,int m)
{
    if((m==1)||(m==0))
        return 1;
    else if(*s==*(s+m-1)){
       m=m-2;
       return number(s+1,m);
    }
    else
        return 0;
}
