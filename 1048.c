#include<stdio.h>
int main()
{
    float A;
    char c;
    c='%';
    scanf("%f",&A);
    if(A>=0.00 && A<=400.00)
    {
        printf("Novo salario: %0.2f\n",(A*0.15)+A);
        printf("Reajuste ganho: %0.2f\n",(A*0.15));
        printf("Em percentual: 15 %c\n",c);
    }
    if(A>=400.01 && A<=800.00)
    {
        printf("Novo salario: %0.2f\n",(A*0.12)+A);
        printf("Reajuste ganho: %0.2f\n",(A*0.12));
        printf("Em percentual: 12 %c\n",c);
    }
    if(A>=800.01 && A<=1200.00)
    {
        printf("Novo salario: %0.2f\n",(A*0.10)+A);
        printf("Reajuste ganho: %0.2f\n",(A*0.10));
        printf("Em percentual: 10 %c\n",c);
    }
    if(A>=1200.01 && A<=2000.00)
    {
        printf("Novo salario: %0.2f\n",(A*0.07)+A);
        printf("Reajuste ganho: %0.2f\n",(A*0.07));
        printf("Em percentual: 7 %c\n",c);
    }
    if(A>=2000.01)
    {
        printf("Novo salario: %0.2f\n",(A*0.04)+A);
        printf("Reajuste ganho: %0.2f\n",(A*0.04));
        printf("Em percentual: 4 %c\n",c);
    }
    return 0;
}
