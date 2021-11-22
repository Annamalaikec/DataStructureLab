#include<stdio.h>
#include<stdlib.h>
struct polynomial
{
  int e, c;
  struct polynomial *next;
} *new1, *head1, *p1, *new2, *head2, *p2;

void
poly1 ()
{
  new1 = (struct polynomial *) malloc (sizeof (struct polynomial));
  printf ("ENTER THE COEFFICIANT:");
  scanf ("%d", &new1->c);
  printf ("ENTER THE EXPONENT:");
  scanf ("%d", &new1->e);
  new1->next = NULL;

  if (head1 == NULL)
    {
      head1 = new1;
      p1 = new1;
    }
  else
    {
      p1->next = new1;
      p1 = new1;
    }
}

void
poly2 ()
{
  new2 = (struct polynomial *) malloc (sizeof (struct polynomial));
  printf ("ENTER THE COEFFICIANT::");
  scanf ("%d", &new2->c);
  printf ("ENTER THE EXPONENT:");
  scanf ("%d", &new2->e);
  new2->next = NULL;
  if (head2 == NULL)
    {
      head2 = new2;
      p2 = new2;
    }
  else
    {
      p2->next = new2;
      p2 = new2;
    }
}


void
display1 ()
{
  p1 = head1;
  printf ("\nEQUATION OF FIRST POLYNOMIAL:\n");
  while (p1 != NULL)
    {
      printf ("%dx^%d", p1->c, p1->e);
      p1 = p1->next;
      if (p1 != NULL)
	printf ("+");
    }
  printf ("\n");
}

void
display2 ()
{
  p2 = head2;
  printf ("\nEQUATION OF SECOND POLYNOMIAL:\n");
  while (p2 != NULL)
    {
      printf ("%dx^%d", p2->c, p2->e);
      p2 = p2->next;
      if (p2 != NULL)
	printf ("+");
    }
  printf ("\n");
}


void
addition ()
{
  p1 = head1;
  p2 = head2;
  while (p1 != NULL && p2 != NULL)
    {
      if (p1->e == p2->e)
	{
	  printf ("%dx^%d", p1->c + p2->c, p1->e);
	  p1 = p1->next;
	  p2 = p2->next;
	}
      else if (p1->e > p2->e)
	{
	  printf ("%dx^%d", p1->c, p1->e);
	  p1 = p1->next;
	}
      else
	{
	  printf ("%dx^%d", p2->c, p2->e);
	  p2 = p2->next;
	}
      if (p1 != NULL || p2 != NULL)
	printf ("+");
    }
  while (p1 != NULL)
    {
      printf ("%dx^%d", p1->c, p1->e);
      p1 = p1->next;
      if (p1 != NULL)
	printf ("+");
    }
  while (p2 != NULL)
    {
      printf ("%dx^%d", p2->c, p2->e);
      p2 = p2->next;
      if (p2 != NULL)
	printf ("+");
    }
}

int
main ()
{
  short n, m, i;
  printf ("ENTER THE NUMBER OF TERMS IN EQUATION 1  :\n");
  scanf ("%hd", &n);
  for (i = 0; i < n; i++)
    poly1 ();
  display1 ();
  printf ("ENTER THE NUMBER OF TERMS IN EQUATION 2 :\n");
  scanf ("%hd", &m);
  for (i = 0; i < m; i++)
    poly2 ();
  display2 ();
  printf ("\n----THE POLYNOMIAL---\n");
  addition ();
  return 0;
}

OUTPUT :
ENTER THE NUMBER OF TERMS IN EQUATION 1  :
3
ENTER THE COEFFICIANT:5
ENTER THE EXPONENT:6
ENTER THE COEFFICIANT:9
ENTER THE EXPONENT:3
ENTER THE COEFFICIANT:4
ENTER THE EXPONENT:
2

EQUATION OF FIRST POLYNOMIAL:
5x^6+9x^3+4x^2
ENTER THE NUMBER OF TERMS IN EQUATION 2 :
2
ENTER THE COEFFICIANT::3
ENTER THE EXPONENT:3
ENTER THE COEFFICIANT::6
ENTER THE EXPONENT:3

EQUATION OF SECOND POLYNOMIAL:
3x^3+6x^3

----THE POLYNOMIAL---
5x^6+12x^3+6x^3+4x^2
