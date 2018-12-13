#include<stdio.h>
int main()
{
    int A;
    while(scanf("%d",&A))
    {
        if(A!=2002){
            printf("Senha Invalida\n");
        }
        else if(A==2002){
            printf("Acesso Permitido\n");
        }
        if(A==2002)
        {
            break;
        }
    }
    return 0;
}
