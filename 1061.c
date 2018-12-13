#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,t1,t2,t,d,h,m,s;
    char c1[10],c2[10];
    scanf("%s",&c1);
    scanf("%d",&d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s",&c2);
    scanf("%d",&d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    t1=d1*86400 + h1*3600 + m1*60 + s1;
    t2=d2*86400 + h2*3600 + m2*60 + s2;
    t=t2-t1;
    if(t>=60){
        d=t/86400;
        h=(t%86400)/3600;
        m=((t%86400)%3600)/60;
        s=((t%86400)%3600)%60;
        printf("%d dia(s)\n",d);
        printf("%d hora(s)\n",h);
        printf("%d minuto(s)\n",m);
        printf("%d segundo(s)\n",s);
        }
        return 0;
}
