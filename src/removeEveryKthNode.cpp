/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if ((head == NULL) || (K<=1))
		return NULL;
	struct node* p;
	int i = 1;
	p = head;
	while (p->next != NULL)
	{
		if (i == K-1)
		{
			p->next = p->next->next;
			i = 0;
		}
		else
		{
			i++;
			p = p->next;
		}
	}
	return head;
}