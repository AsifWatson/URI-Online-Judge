#include<stdio.h>
int main()
{
    int a[100],i,j,max=0,loc=0;

    for(i=0;i<100;i++)
        scanf("%d",&a[i]);

    for(i=0;i<100;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            loc=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",loc);

    return 0;
}
