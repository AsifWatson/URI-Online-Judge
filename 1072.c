#include<stdio.h>
int main()
{
    int i,X,N,a=0,b=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20)
        {
            a++;
        }
        else
        {
            b++;
        }

    }
    printf("%d in\n",a++);
    printf("%d out\n",b++);
    return 0;
}
