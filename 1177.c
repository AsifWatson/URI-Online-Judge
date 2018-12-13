#include<stdio.h>
int main()
{
    int T,i,m,j=0,k;
    scanf("%d",&T);
    for(i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==T)
        {
            j=0;
        }

    }
    return 0;
}
