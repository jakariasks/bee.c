#include<stdio.h>
int main()
{
    int N[20],i,j;

    for(i=0; i<20; i++)
    {
        scanf("%d",&N[i]);

    }
    for(j=19,i=0; j>=0 && i<20; j--, i++)
    {
        printf("N[%d] = %d\n",i,N[j]);
    }



    return 0;
}
