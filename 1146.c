#include<stdio.h>
int main()
{
    int X,i;
    while(scanf("%d",&X)==1)
    {
        if(X==0)
        {
            break;
        }
        for(i=1;i<=X-1;i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",X);

    }
    return 0;
}
