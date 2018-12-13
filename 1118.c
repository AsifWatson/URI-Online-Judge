#include<stdio.h>
int main()
{
    float a,b,media;
    int X,i;
    for(i=1; ;i++)
    {
        while(scanf("%f",&a)!=EOF)
        {
            if(a>=0 && a<=10)
            {
                break;
            }
            else
            {
                printf("nota invalida\n");
                continue;
            }
        }
        while(scanf("%f",&b)!=EOF)
        {
            if(b>=0 && b<=10)
            {
                break;
            }
            else
            {
                printf("nota invalida\n");
                continue;
            }
        }
        media=(a+b)/2;
        printf("media = %.2f\n",media);
        printf("novo calculo (1-sim 2-nao)\n");

        while(scanf("%d",&X)!=EOF)
        {
            if(X>=1 && X<=2)
            {
                break;
            }
            else
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
        }
        if(X==1)
        {
            continue;
        }
        else if(X==2)
        {
            break;
        }
    }
    return 0;
}
