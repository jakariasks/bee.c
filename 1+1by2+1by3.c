#include <stdio.h>
int main()
{
    int n, i;
    double div,sum=0;

    printf("Enter n = ");
    scanf("%d",&n);
    for (i = 1; i<=n; i++)
    {
        if(i==1)
            printf("1 +\t ");
        else
            printf("1/%d +\t",i);

        div = 1/(float)i;
        sum= sum + div;

    }
    printf(" = %.2lf\n",sum);
    return 0;
}
