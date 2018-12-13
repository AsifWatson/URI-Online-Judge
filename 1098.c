#include<stdio.h>
int main()
{
    int i,j;
    float I,J;
    for(i=0;i<=20;i++)
    {
        if(i==0 || i==10 || i==20)
        {
            for(j=1;j<=3;j++)
            {
                I=i/10;
                J=j+I;
                printf("I=%.0f J=%.0f\n",I,J);
            }
        }

        else if(i%2==0)
        {
            for(j=1;j<=3;j++)
            {
                I=(float)i/10;
                J=j+I;
                printf("I=%.1f J=%.1f\n",I,J);
            }
        }
    }
    return 0;
}
