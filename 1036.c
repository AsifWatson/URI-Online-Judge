#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,X,R1,R2;
    scanf("%f %f %f",&A,&B,&C);
    X=(B*B)-4*A*C;
    R1=(-B+sqrt(X))/(2*A);
    R2=(-B-sqrt(X))/(2*A);
    if(A!=0 && X>0){
        printf("R1 = %0.5f\nR2 = %0.5f\n",R1,R2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
