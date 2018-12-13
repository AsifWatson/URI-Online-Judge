#include<stdio.h>
int main()
{
    int a=0,b=1,i,c,N,temp;
    scanf("%d",&N);
    for(i=1;i<=N-1;i++)
    {
        printf("%d ",a);
        c=a+b;
        temp=a;
        a=b;
        b=c;
    }
    printf("%d\n",a);
    return 0;
}

