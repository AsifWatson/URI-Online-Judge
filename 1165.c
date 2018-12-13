#include<stdio.h>
int main()
{
    int N,X,i,j,r,b;
    scanf("%d",&N);
    for(j=1;j<=N;j++)
    {
        b=0;
        scanf("%d",&X);
        for(i=2;i<X;i++)
        {
            if(X%i==0)
            {
                b++;
            }

        }
        if(b==0)
        {
            printf("%d eh primo\n",X);
        }
        else if(b!=0)
        {
            printf("%d nao eh primo\n",X);
        }
    }
    return 0;
}
