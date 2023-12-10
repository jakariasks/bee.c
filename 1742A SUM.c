#include<stdio.h>
int main()
{
    int i,n1,n2,n3,T,sum1,sum2,sum3;

    scanf("%d",&T);
    i=1;
    while(i<=T)
    {
        scanf("%d%d%d",&n1,&n2,&n3);
        sum1=n1+n2;
        sum2=n2+n3;
        sum3=n3+n1;

        if (n1==0 && n2==0 && n3==0)
        printf("YES\n");
        else if ((n1==0 && n2 ==0)|| (n2==0 && n3==0) ||(n3==0&&n1==0))
            printf("NO\n");
        else if (sum1==n1 || sum1==n2|| sum1==n3)
        {
            printf("YES\n");
            //printf("NO\n");

        }
        else if (sum2==n1 || sum2==n2|| sum2==n3)
        {
            printf("YES\n");
            //printf("NO\n");
        }
        else if (sum3==n1 || sum3==n2|| sum3==n3)
        {
            printf("YES\n");
            //printf("NO\n");
        }
        else
            printf("NO\n");

        i++;
    }
    return 0;
}
