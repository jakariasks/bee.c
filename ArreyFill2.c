#include<stdio.h>
int main()
{
    int N[1000];
    int i,n;
    scanf("%d",&n);
    for (i=0; i<1000; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\n",j);
    }

    return 0;
}
