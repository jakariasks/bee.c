#include<stdio.h>
int main()
{
    int t,i;
    int count=0;
    scanf("%d",&t);

    int arr[4];

    for (i=0; i<4; i++)
    {
        scanf("%d",arr[i]);
    }

    for(i=1; i<=3; i++)
    {

        if(arr[0]<arr[i])
        {
            count++;

        }
        printf("%d\n",count);
    }


    return 0;




}
