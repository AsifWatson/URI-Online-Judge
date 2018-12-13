#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X<Y)
    {
        printf("O JOGO DUROU %d HORA(S)\n",Y-X);
    }
    else if(X>Y)
    {
        printf("O JOGO DUROU %d HORA(S)\n",((24-X)+Y));
    }
    else if(X==Y)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
