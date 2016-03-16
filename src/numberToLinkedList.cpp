/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

int power(int n)
{
	int i, f = 1;
	for (i = 1; i < n; i++)
		f = f * 10;
	return f;
}
struct node * numberToLinkedList(int N) {
	struct node *head, *temp, *p;
	int r, m;
	int i = 0, n = N;
	head = NULL;
	if (N == 0)
	{
		temp = (node*)malloc(sizeof(node*));
		temp->num = 0;
		temp->next = NULL;
		return temp;
	}
	if (N < 0)
		N = -N;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	
	for (n = i; n > 0; n--)
	{
		temp = (node*)malloc(sizeof(node*));
		m = power(n);
		r = N / m;
		N = N - (r*m); 
		temp->num = r;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			p = head;
		}
		else
		{
			p->next = temp;
			p = p->next;
		}
	}
	p = head;
	return p;
	
}