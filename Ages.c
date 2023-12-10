#include<stdio.h>
int main()
{
    int N,sum,count;
    sum=0;
    count=0;
    double avg;

    while(1)
    {
        scanf("%d",&N);
        if (N<0)
        {
            break;
        }
        else
        {
            sum=sum+N;
            count++;
        }
    }
    avg=(float)sum/count;
    printf("%0.2lf\n",avg);

    return 0;
}
