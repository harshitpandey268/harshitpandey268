/*Program to reverse a linked list */

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

/* structure containing a data part and link part */
struct node
{
	int data ;
	struct node *next ;
} ;

void addatbeg ( struct node **, int ) ;
void reverse ( struct node ** ) ;
void display ( struct node * ) ;
int count ( struct node * ) ;

void main( )
{
	struct node *p ;
    int ans, num;
	p = NULL ;  /* empty linked list */

   while( ans!=3)
   {
   clrscr();

  printf("\n ******************************REVERSING LIST********************************");
   printf("\n\n");



   display(p);


   printf("\n\n\t\t 1: INSERT  ELEMENT:");
   printf("\n\t\t 2: REVERSE LIST:");
   printf("\n\t\t 3: COUNT ELEMENT:");
   printf("\n\t\t 4: EXIT :");

   printf("\n\n\t\t ENTER CHOICE :");
   scanf("%d", &ans);

   switch (ans)
    {

    case 1:

    printf("\n\t\t INSERT ELEMENT :");
    scanf("%d",&num);

    addatbeg(&p , num);

     break;


   case 2:

    reverse(&p);

    break;


    case 3:

    printf("\n\t\t NO OF ELEMENT PRESENT IN LIST ! %d",count(p));
    getch();
    break;


   case 4:
   exit();

   }

 }

 }


/* adds a new node at the beginning of the linked list */
void addatbeg ( struct node **q, int num )
{
	struct node *temp ;

	/* add new node */
	temp = malloc ( sizeof ( struct node ) ) ;
	temp -> data = num ;
	temp -> next = *q ;
	*q = temp ;
}

void reverse ( struct node **q )
{
	struct node *x, *y, *z ;

	x = *q ;
	y = NULL ;

	/* traverse the entire linked list */
	while ( x != NULL )
	{
		z = y ;
		y = x ;
		x = x -> next ;
		y -> next = z ;
	}

	*q = y;
}

/* displays the contents of the linked list */
void display ( struct node *q )
{
if( q != NULL)
{
	/* traverse the entire linked list */
	while ( q != NULL )
	{
		printf ( "\t%d ", q -> data ) ;
		q = q -> next ;
	}
}
 else
 printf("\t THERE IS NO ELEMENT IN THE LIST !");

}


/* counts the number of nodes present in the linked list */
int count ( struct node * q )
{
	int c = 0 ;

	/* traverse the entire linked list */
	while ( q != NULL )
	{
		q = q -> next ;
		c++ ;
	}
	return c ;
}

