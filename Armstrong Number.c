#include <stdio.h>
int main()
{
    int num,rem,temp,sum=0;
    printf("Enter any Number :");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;

    }
    if(sum==num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
    return 0;


}

