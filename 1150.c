#include<stdio.h>
int main()
{
    int X,Z,i,loc=0,sum;
    scanf("%d",&X);
    scanf("%d",&Z);

    for( ; ; )
    {
        if(Z<=X)
        {
            scanf("%d",&Z);
        }
        if(Z>X)
        {
            break;
        }
    }
    sum=0;
    for(i=X;i<=100;i++)
    {
        sum=sum+i;
        loc=loc+1;
        if(sum>Z)
        {
            break;
        }
    }
    printf("%d\n",loc);

    return 0;
}
