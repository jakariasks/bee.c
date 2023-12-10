#include<stdio.h>
int main()
{
    int T,j=0,N[1000];

    scanf("%d",&T);

    for(int i=0; i<10; i++ )
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if (j==T)
            j=0;

    }

    return 0;
}
