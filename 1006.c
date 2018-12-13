#include<stdio.h>
int main()
{
    float A,B,C,X,Y,Z,MEDIA;
    scanf("%f %f %f", &A,&B,&C);
    X=A*2;
    Y=B*3;
    Z=C*5;
    MEDIA=(X+Y+Z)/10;
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
