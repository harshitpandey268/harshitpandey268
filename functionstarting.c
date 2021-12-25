#include <stdio.h>

void sum()
{
    int a, b, sum=0;
    printf("Enter any two number:");
    scanf("%d%d", &a,&b);
    sum = a+b;
    printf("sum=%d\n", sum);

}

void main()
{
    sum();
    printf("hello\n");
    sum();
    sum();
}

