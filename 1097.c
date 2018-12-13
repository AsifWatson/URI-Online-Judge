
#include<stdio.h>
int main()
{
    int I,J,i,a,b,j;
    a=7;
    b=5;
    for(i=1;i<=9;i++)
    {
        if(i%2==0)
        {
            continue;
        }

        for(j=a;j>=b;j--)
        {
            I=i;
            J=j;
            printf("I=%d J=%d\n",I,J);

        }
        a=a+2;
        b=b+2;

    }
    return 0;
}
