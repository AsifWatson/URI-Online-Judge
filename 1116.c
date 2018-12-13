#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    double X,Y;
    for(i=1;i<=N;i++)
    {
        scanf("%lf %lf",&X,&Y);
        if(X!=0 && Y!=0)
        {
            printf("%0.1lf\n",X/Y);
        }
        else if(X==0 && Y!=0)
        {
            printf("%0.1lf\n",X/Y);
        }
        else if(X!=0 && Y==0)
        {
            printf("divisao impossivel\n");
        }

    }
    return 0;
}
