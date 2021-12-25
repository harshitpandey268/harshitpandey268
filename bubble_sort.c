#include<stdio.h>

void printarray(int * A, int n){
    for (int i =0 ; i<n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");

}


void bubblesort(int * A, int n){
    int temp;
    for (int i=0; i< n-1; i++) //for number of pass
    {
        for(int j=0; j< n-1-i; j++)
        {
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j]=A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int A[]={12 , 45 , 32 , 43 ,23 , 4};
    int n = 6;
    printf("before sorting");
    printarray(A, n);
    bubblesort(A, n);
    printf("after sorting");
    printarray(A, n);

    return 0;
}
