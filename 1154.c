#include<stdio.h>
int main()
{
    int X,b=0;
    float a=0;
    while(scanf("%d",&X))
    {
        if(X>=0)
        {
            a=a+X;
            b=b+1;
        }
        else if(X<0)
        {
            break;
        }
    }
    printf("%0.2f\n",a/b);
    return 0;
}
