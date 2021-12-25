/* Program to maintain a linked list */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* structure containing a data part and link part */
struct node
{
	int data ;
	struct node * next ;
} ;

void create (struct node **, int);
void append ( struct node *, int ) ;
void addatbeg ( struct node **, int ) ;
void addafter ( struct node *, int, int ) ;
void display ( struct node * ) ;
int count ( struct node * ) ;
void delete ( struct node **, int ) ;

void main( )
{
	struct node *p ;
   int ans, num, loc ;

	p = NULL ;  /* empty linked list */



	clrscr( ) ;


while( ans!=7)
   {
   clrscr();
   printf("\n ***************************LINK LIST*******************************");
   printf("\n\n");

   display(p);

   printf("\n\n\t\t 1: CREATE LIST :");
   printf("\n\t\t 2: INSERT  FIRST :");
   printf("\n\t\t 3: INSERT  AFTER :");
   printf("\n\t\t 4: INSERT LAST :");
   printf("\n\t\t 5: DELETE ELEMENT :");
   printf("\n\t\t 6: COUNT ELEMENT:");
   printf("\n\t\t 7: EXIT :");

   printf("\n\n\t\t ENTER CHOICE :");
   scanf("%d", &ans);

   switch (ans)
    {

    case 1:

    printf("\n\t\t INSERT ELEMENT :");
    scanf("%d",&num);

     create(&p , num);

     break;


   case 2:

     printf("\n\t\t INSERT ELEMENT :");
    scanf("%d",&num);

     addatbeg(&p , num);

     break;


   case 3:

     printf("\n\t\t INSERT ELEMENT :");
     scanf("%d",&num);

      printf("\n\t\t INSERT LOCATION :");
      scanf("%d",&loc);


     addafter(p,loc,num);

     break;



   case 4:

     printf("\n\t\t INSERT ELEMENT :");
     scanf("%d",&num);

     append(p , num);

     break;


    case 5:

     printf("\n\t\t INSERT ELEMENT TO BE DELETED:");
     scanf("%d",&num);

     delete(&p , num);

     break;


   case 6:

    printf("\n\t\t NO OF ELEMENT PRESENT IN LINK LIST: %d",count(p));
    getch();
    break;


   case 7:
   exit();

   }

 }

 }


 void create(struct node **q, int num )
  {
  struct node *temp ;

	if ( *q == NULL )
	{
		temp = malloc ( sizeof ( struct node ) ) ;
		temp -> data = num ;
		temp -> next = NULL ;
		*q = temp ;
	}
	else
    {
      printf("\n\t\t LIST ALRADY EXISTS !");
      getch();
   }
 }


/* adds a node at the end of a linked list */
void append ( struct node *q, int num )
{
	struct node *temp, *r ;

	/*if ( *q == NULL ) /* if the list is empty, create first node
	{
		temp = malloc ( sizeof ( struct node ) ) ;
		temp -> data = num ;
		temp -> next = NULL ;
		*q = temp ;
	}
	else
	{
	  */
     	temp = q ;

		/* go to last node */
		while ( temp -> next != NULL )
			temp = temp -> next ;

		/* add node at the end */
		r = malloc ( sizeof ( struct node ) ) ;
		r -> data = num ;
		r -> next = NULL ;
		temp -> next = r ;
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

/* adds a new node after the specified number of nodes */
void addafter ( struct node *q, int loc, int num )
{
	struct node *temp, *r ;
	int i ;

	temp = q ;
	/* skip to desired portion */
	for ( i = 1 ; i < loc ; i++ )
	{
		temp = temp -> next ;

		/* if end of linked list is encountered */
		if ( temp == NULL )
		{
			printf ( "\n\t\tTHERE ARE LESS THAN %d ELEMENTS IN THE LIST !", loc ) ;
         getch();
			return ;
		}
	}

	/* insert new node */

	r = malloc ( sizeof ( struct node ) ) ;
	r -> data = num ;
	r -> next = temp -> next ;
	temp -> next = r ;
}

/* displays the contents of the linked list */
void display ( struct node *q )
{

  if(q != NULL)
  {
	/* traverse the entire linked list */
	while ( q != NULL )
	{
		printf ( "\t%d ", q -> data ) ;
		q = q -> next ;
	}
  }
   else
   printf("\t\t THERE IS NO ITEM PRESENT IN THE LIST !");
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

/* deletes the specified node from the linked list */
void delete ( struct node **q, int num )
{
	struct node *old, *temp ;

	temp = *q ;

	while ( temp != NULL )
	{
		if ( temp -> data == num )
		{
			/* if node to be deleted is the first node in the linked list */
			if ( temp == *q )
				*q = temp -> next;

			/* deletes the intermediate nodes in the linked list */
			else
				old -> next = temp -> next ;

			/* free the memory occupied by the node */
			free ( temp ) ;
			return ;
		}

		/* traverse the linked list till the last node is reached */
		else
		{
			old = temp ;  /* old points to the previous node */
			temp = temp -> next ;  /* go to the next node */
		 }
	}

	printf ( "\n\t\tELEMENT %d NOT FOUND !", num ) ;
  getch();
 }

