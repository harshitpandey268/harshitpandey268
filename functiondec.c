#include<stdio.h>
/*void sum(); // function declaration
void main()
{
    sum(); // function calling
}

void sum() // function defination
{
    int a, b, sum=0;
    printf("enter two number");
    scanf("%d %d", &a,&b);
    sum = a+b;
    printf("sum=%d\n", &sum);
}
*/
char fun();

void main()
{
    char ch;
    ch = fun();
    printf ("ch=%c", ch);

}

char fun()
{
    char c;
    printf("enter a character");
    scanf("%c" , &c); 
    return c;
}

