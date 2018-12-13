#include<stdio.h>
int main()
{
    float a,i=0;
    int x=0;
    while(scanf("%f",&a))
    {
        if(a>=0 && a<=10)
        {
            x=x+1;
            i=i+a;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(x==2)
        {
            break;
        }
    }
    printf("media = %0.2f\n",i/x);
    return 0;
}
