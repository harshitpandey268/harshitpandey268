#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;     
    };


void Linkedlisttraveral(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr= ptr->next;
    }
}  
struct Node * insertatbeg(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

struct Node * insertatlast(struct Node * head, int data){
    struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr ->data = data;
    struct Node * p = head;

    while (p->next != NULL){
        p=p->next;

}
p->next = ptr;
ptr->next = NULL;
return head;
}



struct Node * insertatindex(struct Node * head, int data, int index){
    struct Node * ptr =(struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr -> next = p ->next;
    p-> next = ptr;
    return head;
    
}



int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;


    //Allocation of memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third =(struct Node *) malloc(sizeof(struct Node));
    fourth =(struct Node*) malloc(sizeof(struct Node));
   

    //Link first and second nodes
    head ->data = 7;
    head ->next = second;

    //Link second and third nodes
    second -> data = 11;
    second ->next = third;

    //Link third and fourth Nodes
    third ->data = 57;
    third->next = fourth;

    //Terminate the list at the fourth node
    fourth-> data= 45;
    fourth->next= NULL;


   // Linkedlisttraveral(head);
    //head = insertatbeg(head, 78);
    //head = insertatindex(head, 48, 2);

    head = insertatlast(head, 57);

    Linkedlisttraveral(head);
    return 0;
}