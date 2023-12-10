#include <stdio.h>
int main()
{

    int x;
    printf(" Enter any number : ");
    scanf("%d",&x);

    printf("Result is = %d\n",++x);
    printf("Result is = %d\n",x);
    printf("Result is = %d\n",x++);
    printf("Result is = %d\n",--x);
    printf("Result is = %d\n",x);
    printf("Result is = %d\n",x--);

    return 0;
}
