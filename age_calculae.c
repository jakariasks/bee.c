#include<stdio.h>
int main()
{
    int Days,Years,Months,days,x;
    scanf("%d",&Days);

    Years=Days/365;
    x=Days-Years*365;
    Months=x/30;
    days=x-Months*30;

    printf("%d ano(s)\n",Years);
    printf("%d mes(es)\n",Months);
    printf("%d dia(s)\n",days);

    return 0;
}


