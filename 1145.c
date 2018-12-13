#include<stdio.h>
int main()
{
    int M,N,i,j=0,Avg,k;
    scanf("%d %d",&M,&N);
    Avg=N/M;
    for(i=1;i<=Avg;i++)
    {
        for(k=1;k<=M-1;k++)
        {
            printf("%d ",j+k);
        }

        j=j+M;
        printf("%d\n",j);
    }
    return 0;
}
