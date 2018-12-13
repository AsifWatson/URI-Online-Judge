#include<stdio.h>
int main()
{
    float A,B,C,D,E,F,G;
    scanf("%f",&A);
    if(A>=0.00 && A<=2000.00)
    {
        printf("Isento\n");
    }

    else if(A>=2000.01 && A<=3000.00)
    {
        B=(A-2000.00)*0.08;
        printf("R$ %0.2f\n",B);
    }
    else if(A>=3000.01 && A<=4500.00)
    {
        C=1000.00*0.08;
        D=(A-3000.00)*0.18;
        printf("R$ %0.2f\n",C+D);
    }
    else if(A>=4500.01)
    {
        E=1000.00*0.08;
        F=1500.00*0.18;
        G=(A-4500.00)*0.28;
        printf("R$ %0.2f\n",E+F+G);
    }
    return 0;
}
