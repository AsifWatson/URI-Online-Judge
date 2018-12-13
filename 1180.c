#include<stdio.h>
int main()
{
    int N,i,min,loc;
    scanf("%d",&N);
    int X[N];
    for(i=0;i<N;i++)
        scanf("%d",&X[i]);
    min=100000;
    for(i=0;i<N;i++)
    {
        if(X[i]<min)
        {
            min=X[i];
            loc=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",loc);

    return 0;
}
