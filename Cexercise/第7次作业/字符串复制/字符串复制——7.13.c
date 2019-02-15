#include<stdio.h>
#define size 1000
void mycpy (char *s,char *t,int n);
int main (void)
{
    int N,i=0,n,h;
    char c;
    char t[size];
    char s[size];
    scanf("%d",&N);
    for (h=0;h<N;h++){
        getchar();
        while( ((c=getchar())!='\n')){
              t[i]=c;
              i++;
        }
        scanf("%d",&n);
    mycpy(s,t,n);
    for(i=0;i<n;i++){
            printf("%c",s[i]);
    }
            printf("\n");
            i=0;
    }
    return 0;
}
void mycpy(char *s,char *t,int n)
{
    int i;
    for (i=0;i<n;i++){
        s[i]=t[i];
        }
}
