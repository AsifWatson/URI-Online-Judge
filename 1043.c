#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    if(A+B>C && A+C>B && B+C>A)
    {
        printf("Perimetro = %0.1f\n",A+B+C);
    }
    else
    {
        printf("Area = %0.1f\n",((A+B)/2)*C);
    }
    return 0;
}
