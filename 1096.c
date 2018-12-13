#include<stdio.h>
int main()
{
    int I,J,i,j;
    for(i=1;i<=9;i++)
    {

        if(i%2==0)
        {
            continue;
        }
        for(j=7;j>=5;j--)
        {
            I=i;
            J=j;
            printf("I=%d J=%d\n",I,J);
        }

    }
    return 0;
}
