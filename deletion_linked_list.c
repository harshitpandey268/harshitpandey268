#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node * next;

};

void linkedlisttraversal(struct Node * ptr){
    while (ptr!= NULL);
    {
        printf("Element: %d\n", ptr->data);
        ptr= ptr->next;
    }
}

// Case 1: deleting the first node
struct Node * deletefirst(struct Node* head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //Allocate memory for nodes in the linked list in Heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct  Node));
    third = (struct Node*)malloc(sizeof(struct  Node));
    fourth = (struct Node*)malloc(sizeof(struct  Node));

    //Link first Node with second
    head->data = 5;
    head->next = second;

    //Link second Node with third
    second ->data = 6;
    second->next = third;

    //Link third Node with fourth
    third ->data = 9;
    third ->next = fourth;

    //terminate the Lisk at the fourth Node
    fourth ->data = 23;
    fourth ->next =NULL;



    printf("\nLinked list Before deletion\n");
    linkedlisttraversal(head);

    head = deletefirst(head);

    printf("\n Linnked List after Deletion\n");
        
    



    return 0;

}