#include<stdio.h>
int main()
{
    int L,V,i,max=0;
    while(scanf("%d",&L)!=EOF)
    {
        max=0;
        for(i=1;i<=L;i++)
        {
            scanf("%d",&V);
            if(V>max)
                max=V;
        }
        if(max<10)
            printf("1\n");
        else if(max<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
