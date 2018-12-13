#include<stdio.h>
int main()
{
    int M,N,i,Sum=0,temp;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        Sum=0;
        if(M<1 || N<1)
        {
            break;
        }
        if(M>N)
        {
            temp=N;
            N=M;
            M=temp;
        }
        for(i=M;i<=N;i++)
        {
            Sum=Sum+i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",Sum);
    }
    return 0;
}
