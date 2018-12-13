#include<stdio.h>
int main()
{
    int n,A=0,G=0,D=0;
    while(scanf("%d",&n)!=EOF)
    {

        if(n==1)
        {
            A=A+1;
        }
        if(n==2)
        {
            G=G+1;
        }
        if(n==3)
        {
            D=D+1;
        }
        if(n==4)
        {
            break;
        }
        if(n>4)
        {
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",A);
    printf("Gasolina: %d\n",G);
    printf("Diesel: %d\n",D);
    return 0;
}
