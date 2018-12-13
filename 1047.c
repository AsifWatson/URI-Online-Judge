
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=c && b<=d){
        e=(24-a)+c;
        f=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(a>=c && b>=d){
        g=((24-a)+c)-1;
        h=(60-b)+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",g,h);
    }
    else if(a<=c && b<=d){
        i=c-a;
        j=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,j);
    }
    else if(a<=c && b>=d){
        k=(c-a)-1;
        l=(60-b)+d;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",k,l);
    }
    else if(a==c && b==d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}
