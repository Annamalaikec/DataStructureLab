#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
} *head, *temp, *pointer;
void create_node ();
void insert_first ();
void insert_middle ();
void insert_end ();
void delete_first ();
void delete_middle ();
void delete_last ();
void print_node ();
void
main ()
{
  int choice;
  while (1)
    {
      printf("\nCHOICES");    
      printf("\n1.create node \n2.insert at first\n3. insert middle\n4.insert end\n5.delete first\n6.delete middle\n7.delete end:\n enter your choice");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  create_node ();
	  break;
	case 2:
	  insert_first ();
	  break;
	case 3:
	  insert_middle ();
	  break;
	case 4:
	  insert_end ();
	  break;
	case 5:
	  delete_first ();
	  break;
	case 6:
	  delete_middle ();
	  break;
	case 7:
	  delete_last ();
	  break;
	case 8:
	  print_node ();
	  break;
	default:
	  exit (1);
	  break;
	}
    }
}

void
create_node ()
{
  head = (struct node *) malloc (sizeof (struct node));
  if (head == NULL)
    {
      printf ("---MEMORY NOT ALLOCATED---");
    }
  else
    {
      printf ("Enter the data : ");
      scanf ("%d", &head->data);
      head->next = NULL;
    }
  print_node ();
}

void
insert_first ()
{
  temp = (struct node *) malloc (sizeof (struct node));
  if (temp == NULL)
    {
      printf ("---MEMORY NOT ALLOCATED---");
    }
  else
    {
      printf ("Enter the data :");
      scanf ("%d", &temp->data);
      temp->next = head;
      head = temp;
    }
  print_node ();
}

void
insert_middle ()
{
  int data, frw;
  pointer = (struct node *) malloc (sizeof (struct node));

  temp = head;
  if (pointer == NULL)
    {
      printf ("---MEMORY NOT ALLOCATED---");
    }
  else
    {
      printf ("Enter the Element After which to be deleted :");
      scanf ("%d", &data);
      printf ("Enter the Data : ");
      scanf ("%d", &pointer->data);
      pointer->next = NULL;
      temp = head;
      while (temp->data != data)
	{

	  temp = temp->next;
	}

      pointer->next = temp->next;
      temp->next = pointer;
    }
  print_node ();
}

void
insert_end ()
{
  pointer = (struct node *) malloc (sizeof (struct node));
  temp = head;
  printf ("Enter the Data : ");
  scanf ("%d", &pointer->data);
  pointer->next = NULL;

  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = pointer;
  print_node ();
}

void
delete_first ()
{
  if (head == NULL)
    {
      printf ("---LIST IS EMPTY---");
    }
  head = head->next;
  print_node ();
}

void
delete_middle ()
{
  int data, frw;
  pointer = (struct node *) malloc (sizeof (struct node));
  temp = head;
  if (head == NULL)
    {
      printf ("---MEMORY NOT ALLOCATED---");
    }
  else
    {
      printf ("Enter a data to be searched");
      scanf ("%d", &data);
      pointer = head;

      while (temp->data != data)
	{
	  pointer = temp;
	  temp = temp->next;
	}
      pointer->next = temp->next;
    }
  print_node ();
}

void
delete_last ()
{
  pointer = (struct node *) malloc (sizeof (struct node));
  temp = head;
  while (temp->next != NULL)
    {
      pointer = temp;
      temp = temp->next;
    }
  pointer->next = NULL;
  print_node ();
}

void
print_node ()
{
  temp = (struct node *) malloc (sizeof (struct node));
  temp = head;
  printf ("THE LIST IS:");
  while (temp != NULL)
    {
      printf ("%d   ", temp->data);
      temp = temp->next;
    }
}
 

OUTPUT :

CHOICES
1.create node 
2.insert at first
3. insert middle
4.insert end
5.delete first
6.delete middle
7.delete end:
 enter your choice1
Enter the data : 2
THE LIST IS:2   
CHOICES
1.create node 
2.insert at first
3. insert middle
4.insert end
5.delete first
6.delete middle
7.delete end:
 enter your choice1
Enter the data : 3
THE LIST IS:3   
CHOICES
1.create node 
2.insert at first
3. insert middle
4.insert end
5.delete first
6.delete middle
7.delete end:
 enter your choice7
THE LIST IS:3   
CHOICES
1.create node 
2.insert at first
3. insert middle
4.insert end
5.delete first
6.delete middle
7.delete end:




