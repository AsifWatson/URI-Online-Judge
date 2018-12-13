#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N5,Media,Mediaf;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    Media=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %0.1f\n",Media);
    if(Media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Media<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(Media>=5.0 && Media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %0.1f\n",N5);
        Mediaf=(Media+N5)/2;
        if(Mediaf>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(Mediaf<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f\n",Mediaf);
    }
    return 0;
}
