#include<stdio.h>
int main()
{
    int N,i;
    float a,b,c;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        printf("%0.1f\n",(a*2.0+b*3.0+c*5.0)/10.0);
    }
    return 0;
}
