#include<stdio.h>
int main()
{
    int N,X,Y,i,j,a,b;
    scanf("%d",&N);
    for(j=1;j<=N;j++)
    {
        a=0,b=0;
        scanf("%d %d",&X,&Y);
        if(X>Y)
        {
            for(i=Y+1;i<X;i++)
            {
                if(i%2!=0)
                {
                    a=a+i;
                }
            }
            printf("%d\n",a);
        }
        else if(X<Y)
        {
            for(i=X+1;i<Y;i++)
            {
                if(i%2!=0)
                {
                    b=b+i;
                }
            }
            printf("%d\n",b);
        }
        else if(X==Y)
        {
            printf("0\n");
        }
    }
return 0;
}
