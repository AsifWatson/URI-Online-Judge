#include<stdio.h>
int main()
{
    int a,b,x,y;
    float c,z,v;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&x,&y,&z);
    v=(b*c)+(y*z);
    printf("VALOR A PAGAR: R$ %0.2f\n",v);
    return 0;
}

