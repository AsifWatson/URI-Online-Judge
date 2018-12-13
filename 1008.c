#include<stdio.h>

int main()
{
    int A;
    float B,C,D;

    scanf(" %d",&A);
    scanf(" %f %f", &B,&C);

    D=B*C;

    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %.2f\n",D);

    return 0;

}
