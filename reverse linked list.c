#include<stdio>
struct node{
	int data;
	struct node *next;
};
struct node *start;
struct node* createlist(struct node* start);
struct node* addelement(struct node* start,int value);
struct node* reverselist(struct node* start)
{
	struct node* t1,t2;
	t1 = NULL;
	t2 =  NULL;
	while(start!=NULL)
	{
		t2 = start->next;
		start->next = t1;
		t1 = start;
		start = t2;
		
	}
	return(t1);
}
