#include<stdio.h>
int main()
{
    int N,X,Y,i,j,b=0,a=0,sum;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X%2==1)
        {
            sum=0;
            for(j=1;j<=Y;j++)
            {
                sum=sum+X;
                X=X+2;
            }
        }
        else
        {
            X++;
            sum=0;
            for(j=1;j<=Y;j++)
            {
                sum=sum+X;
                X=X+2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
