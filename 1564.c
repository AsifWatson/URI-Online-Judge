#include<stdio.h>
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        if(N==0)
        {
            printf("vai ter copa!\n");
        }
        if(N>0)
        {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
