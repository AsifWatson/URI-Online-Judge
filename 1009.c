#include<stdio.h>
int main()
{
    char name[50];
    double A,B,C,D;
    scanf("%s",name);
    scanf(" %lf %lf",&A,&B);
    C=B*0.15;
    D=A+C;
    printf("TOTAL = R$ %.2lf\n",D);
    return 0;

}
