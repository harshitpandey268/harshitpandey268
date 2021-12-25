// #include<stdio.h>

// int main() {
//     int n,i;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for (i=1; i<=10; ++i){
//         printf("%d * %d = %d \n", n, i, n*i);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int c = 5, no = 10;
    do {
        no /= c;
    } while(c--);
  
    printf ("%dn", no);
    return 0;
}