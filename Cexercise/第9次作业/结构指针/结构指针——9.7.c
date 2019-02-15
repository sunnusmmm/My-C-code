#include<stdio.h>
/*struct Student
{
    int num;
    char name[19];
    double score;
} s[3];*/
main (void)
{
    /*int N, i, k;
    scanf("%d", &N);
    for (k=0; k<N; k++)
    {
        struct Student *p;
        p=s;
        for (i=0; i<3; i++)
        {
            scanf("%d %s %lf", &s[i].num, s[i].name, &s[i].score);
        }
        for (i=0; i<3; i++)
        {
            printf("%d\t%-20s%f\n", s[i].num, s[i].name, s[i].score);
        }
        for (i=0; i<3; i++)
        {
            printf("%d\t%-20s%f\n", p->num, p->name, p->score);
            p++;
        }
    }*/
    int a,b,sum;
    scanf("%d%d",&a,&b);
    printf("input the two number:")
    sum = a+b;
    printf("sum=%d\n",sum);
}
