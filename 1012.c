#include<stdio.h>
int main()
{
    double A,B,C,pi,a,b,c,d,e;
    scanf("%lf %lf %lf",&A,&B,&C);
    pi=3.14159;
    a=(A*C)/2;
    b=pi*C*C;
    c=((A+B)*C)/2;
    d=B*B;
    e=A*B;

    printf("TRIANGULO: %0.3lf\n",a);
    printf("CIRCULO: %0.3lf\n",b);
    printf("TRAPEZIO: %0.3lf\n",c);
    printf("QUADRADO: %0.3lf\n",d);
    printf("RETANGULO: %0.3lf\n",e);

    return 0;
}
