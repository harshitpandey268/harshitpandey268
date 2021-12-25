#include<stdio.h>

void display(int arr[], int n)
//Traversal
{
    for(int i=0; i<n; i++)
        {
        printf("%d\n", arr[i]);
        }
}
//code for insertion

int indinsertion(int arr[],int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;

}

int main(){
    int arr[100] = {2,25,65,48,68,79};
    int size=6, element = 34, index=2;
    display (arr, size);
    indinsertion(arr, size, element, 100, index);
    size+=1;
    display(arr, size); 

    if (arr[index] == element)
    {
        printf("insertion successful\n");
        display(arr, size);
    }
else
    {
        printf("insertion failed!");
    } 

    return 0;
}