#include<stdio.h>
int main()
{
    int N,i,j=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d %d %d PUM\n",j+1,j+2,j+3);
        j=j+4;
    }
    return 0;
}
