#include<stdio.h>

void selection_sort(int * A, int n){
    int indexofmin, temp;

    for(int i=0; i < n-1; i++)
    {
        indexofmin = i;
        for (int j= i+1; j < n; j++)
        {
            if(A[j] < A[indexofmin])
            {
                indexofmin= j;
            }
        }

    
    temp = A[i];
    A[i]=A[indexofmin];
    A[indexofmin] = temp;

}
}

void traverseArray(int * A, int n){
    for (int i=0; i<n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
    }


int main(){

    

int n;//array size
printf("Enter the value of arr size ");
scanf("%d",&n);//input array size
int A[n];
for(int i=0;i<n;i++){
printf("Enter array value\n");
scanf("%d",&A[i]);//input array value 
}
for(int i=0;i<n;i++){//output array value
printf("Value of array is %d \n",A[i]);
}
printf("Array before Selection sort:-\n");
traverseArray(A, n);
selection_sort(A, n);
printf("Array after Selection Sort:-\n ");
traverseArray(A,n);



    return 0;
}
