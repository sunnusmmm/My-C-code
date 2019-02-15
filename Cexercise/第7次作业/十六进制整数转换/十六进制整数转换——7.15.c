#include<stdio.h>
int main (void)
{
    int N,i,t,m,h;
    int num;
    char s[81];
    scanf("%d",&N);
    getchar();
    for(i=0;i<N;i++){
            h=0;
            while((t=getchar())!='\n'){
                s[h]=t;
                h++;
            }
            m=2;
                num=0;
                while(m<h){
                    if ((s[0]=='0')&&(s[1]=='x')){
                        if((s[m]>='A')&&(s[m]<='Z'))
                             num=num*16+s[m]-'A'+10;
                        else if ((s[m]<='z')&&(s[m]>='a'))
                            num=num*16+s[m]-'a'+10;
                        else
                            num=num*16+s[m]-'0';
                        m++;
                }
                }
    printf("%d\n",num);
    }
    return 0;
}
