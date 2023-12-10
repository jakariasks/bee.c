#include <stdio.h>
int main()
{
    int n, i,sum=1;


    printf("Enter n = ");
    scanf("%d",&n);
    for (i = 1; i<=n; i++)
    {
        printf("%d X ",i);
        sum = sum*i;

    }
    printf(" = %d\n",sum);
    return 0;
}

