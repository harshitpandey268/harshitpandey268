#include <stdio.h>
#include <stdlib.h>


struct stack{
    int size;
    int top;
    int *arr ;

}

isEmpty(struct stack * ptr){
    if(ptr-> top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

/*isFull(struct stack * ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
*/


int main(){
    //struct stack s;
    //  s.size = 54;
    // s.top = -1;
    // s.arr = (int *) malloc (sizeof(int));


   struct stack * s;

   s->size = 54;
   s->top = 2;
   s->arr = (int *) malloc(sizeof(int));

       

 if (isEmpty(s)){
     printf("the stack is empty");
 }
 else{
     printf("the stack is not empty");
 }



    return 0;
}