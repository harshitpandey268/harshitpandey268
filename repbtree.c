#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;

};
struct node *creating_node(int data){
    struct node * n; //creating the node pointer
    n=(struct node *) malloc(sizeof(struct node));//allocting the memory in heap
    n->data = data; //setting up the data
    n->left = NULL; //setting up the left child
    n->right = NULL; //setting up the right child

    return n; //returning the n node



};

int main(){

    // //constructing the root node
    // struct node * root;
    // root = (struct node *) malloc(sizeof(struct node));
    // root->data = 4;
    // root->left = NULL;
    // root ->right = NULL;

    // //constructing the 1st node
    // struct node * child1;
    // child1 = (struct node *) malloc(sizeof(struct node));
    // child1->data= 6;
    // child1->left=NULL;
    // child1->right=NULL;

    // //constructing the 2nd child node
    // struct node * child2;
    // child2 = (struct node *) malloc(sizeof(struct node));
    // child2->data = 12;
    // child2->left=NULL;
    // child2->right=NULL;

    //constructing the child node using function.

    struct node * root = creating_node(12);
    struct node * child1 =creating_node(45);
    struct node * child2= creating_node(4);





//Linking the root node with left and right children.
    root->left = child1;
    root ->right = child2; 
        




    return 0;
}