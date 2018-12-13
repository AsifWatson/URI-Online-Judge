#include<stdio.h>
int main()
{
    int N,Amount,i,T=0,C=0,R=0,S=0;
    float Cp,Rp,Sp;
    char Type;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %c",&Amount,&Type);
        T=T+Amount;
        if(Type=='C')
        {
            C=C+Amount;
        }
        else if(Type=='R')
        {
            R=R+Amount;
        }
        else if(Type=='S')
        {
            S=S+Amount;
        }
    }
    Cp=((float)C/(float)T)*100;
    Rp=((float)R/(float)T)*100;
    Sp=((float)S/(float)T)*100;
    printf("Total: %d cobaias\n",T);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",Cp);
    printf("Percentual de ratos: %.2f %%\n",Rp);
    printf("Percentual de sapos: %.2f %%\n",Sp);

    return 0;
}
