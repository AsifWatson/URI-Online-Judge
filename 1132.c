#include<stdio.h>
int main()
{
    int X,Y,i,a=0,b=0;
    scanf("%d %d",&X,&Y);
    if(X<Y)
    {
        for(i=X;i<=Y;i++)
        {
            if(i%13!=0)
            {
                a=a+i;
            }
        }
        printf("%d\n",a);
    }
    if(X>Y)
    {
        for(i=Y;i<=X;i++)
        {
            if(i%13!=0)
            {
                b=b+i;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
