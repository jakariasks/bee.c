
#include<stdio.h>
int main()
{
    double T,j,N[100];

    scanf("%lf",&T);

    for(int i=0; i<100; i++ )
    {
        printf("N[%d] = %0.4lf\n",i,T);
        T/=2;


    }

    return 0;
}
