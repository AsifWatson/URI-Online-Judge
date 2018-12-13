#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N/2;i++)
    {
        if(N%2==1)
        {
            continue;
        }
        printf("%d^2 = %d\n",i*2,((i*2)*(i*2)));
    }
    return 0;
}
