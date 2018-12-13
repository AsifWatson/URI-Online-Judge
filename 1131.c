#include<stdio.h>
int main()
{
    int I,G,A=0,a=0,b=0,c=0,X;
    while(scanf("%d %d",&I,&G)!=EOF)
    {
        A++;
        if(I>G)
        {
            a++;
        }
        else if(I<G)
        {
            b++;
        }
        else
        {
            c++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&X);
        if(X==1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("%d grenais\n",A);
    printf("Inter:%d\n",a);
    printf("Gremio:%d\n",b);
    printf("Empates:%d\n",c);
    if(a>b)
    {
        printf("Inter venceu mais\n");
    }
    else if(a<b)
    {
        printf("Gremio venceu mais\n");
    }
    else if(a==b)
    {
        printf("Não houve vencedor\n");
    }
    return 0;

}
