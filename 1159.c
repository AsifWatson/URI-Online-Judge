#include<stdio.h>
int main()
{
    int X,i,j,sum;
    while(scanf("%d",&X))
    {
        if(X==0)
        {
            break;
        }
        if(X%2==0)
        {
            sum=0;
            for(i=1;i<=5;i++)
            {
                    sum=sum+X;
                    X=X+2;
            }
            printf("%d\n",sum);
        }
        else
        {
            X++;
            sum=0;
            for(j=1;j<=5;j++)
            {
                    sum=sum+X;
                    X=X+2;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
