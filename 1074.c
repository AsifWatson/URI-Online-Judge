#include<stdio.h>
int main()
{
    int i,tc,N;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&N);
        {
            if(N==0)
            {
                printf("NULL\n");
            }
            else if(N>0 && N%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if(N>0 && N%2!=0)
            {
                printf("ODD POSITIVE\n");
            }
            else if(N<0 && N%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if(N<0 && N%2!=0)
            {
                printf("ODD NEGATIVE\n");
            }
        }

    }

    return 0;
}
