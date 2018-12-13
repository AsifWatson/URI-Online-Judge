#include<stdio.h>
int main()
{
    int A,N,Sum,i;
    scanf("%d %d",&A,&N);
    if(N<1)
    {
        for( ; ; )
        {
            scanf("%d",&N);
            if(N>0)
            {
                break;
            }
        }

    }
    Sum=A;
    for(i=A+1;i<A+N;i++)
    {
        Sum=Sum+i;
    }
    printf("%d\n",Sum);
    return 0;
}
