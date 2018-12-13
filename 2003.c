#include <stdio.h>
int main()
{
    int H,I;

    while(scanf("%d:%d", &H, &I)!=EOF)
    {
        printf("Atraso maximo: ");

        if(H<7 || (H==7 && I==0))
            printf("0\n");
        else
            printf("%d\n", ((H+1)-8)*60 + I);

    }

    return 0;
}
