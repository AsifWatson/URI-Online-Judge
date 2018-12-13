#include<stdio.h>
int main()
{
    int A[100][100],i,j,N,k,f;
    while(scanf("%d",&N))
    {
        if(N==0)
        {
            break;
        }
        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
            {
                A[i][j]=0;
            }
        }
        k=0;
        f=N;
        for( ;k<=f; )
        {
            for(i=k;i<f;i++)
            {
                for(j=k;j<f;j++)
                {
                    A[i][j]++;
                }
            }
            k++;
            f--;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(j==0)
                {
                    printf("%3d",A[i][j]);
                }
                else
                {
                    printf(" %3d",A[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
