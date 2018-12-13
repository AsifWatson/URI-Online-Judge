#include<stdio.h>
int main()
{
    int N,X,i,j,sum;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=0;
        scanf("%d",&X);
        for(j=1;j<X;j++)
        {
            if(X%j==0)
            {
                sum=sum+j;
            }
        }
        if(X!=sum)
        {
            printf("%d nao eh perfeito\n",X);
        }
        else
        {
            printf("%d eh perfeito\n",X);
        }
    }
    return 0;
}

