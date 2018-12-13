#include<stdio.h>
int main()
{
    int i,count=0;
    float n,a=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            count++;
            a=a+n;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%0.1f\n",a/count);

    return 0;
}

