#include<stdio.h>
int main()
{
    int PA,PB,T,i,j,loc;;
    double G1,G2;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        loc=0;
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        for(j=1;j<=101;j++)
        {
            PA=PA+(PA*(G1/100));
            PB=PB+(PB*(G2/100));
            loc=loc+1;
            if(PA>PB)
            {
                break;
            }
        }
        if(loc>100)
        {
            printf("Mais de 1 seculo.\n");
            continue;
        }
        printf("%d anos.\n",loc);
    }
    return 0;
}
