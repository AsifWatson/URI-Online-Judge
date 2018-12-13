#include <stdio.h>
int main()
{
    int N,T,c,d=0,e=1;
    scanf("%d", &N);
    int ara[N];
    for(T=0; T<N; T++)
        scanf("%d", &ara[T]);
    c=ara[d];
    for(d=0; d<N; d++)
    {
        if(ara[d]<c)
        {
            c=ara[d];
            e=d+1;
        }

    }
    printf("%d\n", e);
    return 0;
}
