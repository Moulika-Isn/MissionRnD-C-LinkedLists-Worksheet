/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	int i = 0;
	int num=0, r, s, t = 0;
	struct node* ptr;
	int arr[40], j;
	ptr = head;
	while (ptr->next != NULL)
	{
		arr[i] = (ptr->digit1 * 10) + (ptr->digit2);
		i++;
		ptr = ptr->next;
	}
	arr[i] = (ptr->digit1 * 10) + (ptr->digit2);
	for(j=0;j<=i;j++)
	{
		if (t == 0)
		{
			s = 1;
			t = 1;
		}
		if (t == 1)
			s = 100;
		r = arr[j];
		num = (num*s) + r;		
	}
	return num;
}
