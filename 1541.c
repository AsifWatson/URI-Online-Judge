#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    double y;

        while(scanf("%d",&A)!=EOF)
        {
            if(A==0)
            {
                break;
            }
            scanf("%d%d",&B,&C);

            y=(A*B*100)/C;
            printf("%.0lf\n",floor(sqrt(y)));

        }
    return 0;
}
