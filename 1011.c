#include<stdio.h>
int main()
{
    double A,pi,R;
    scanf("%lf",&R);
    pi=3.14159;
    A=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",A);
    return 0;
}
