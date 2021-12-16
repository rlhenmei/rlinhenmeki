 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int date;
	struct node* next;
};
int main()
{
	struct node* head, * p, * q=NULL, * t;
	int i, n, a;
	scanf("%d", &n);
	head = NULL;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a);

		p = (struct node*)malloc(sizeof(struct node));
		p->date = a;
		p->next = NULL;
		if (head == NULL)
		{
			head = p;
		}
		else
			q->next = p;
		q = p;
	}
	t = head;
	while (t != NULL)
	{
		printf("%d ", t->date);
		t = t->next;
	}
	return 0;
}
//int main()
//{
//    int n, count = 1;
//    double i = 2, sum = 2;
//    scanf("%d", &n);
//    while (sum < n)
//    {
//        i *= 0.98;
//        sum += i;
//        count++;
//
//    }
//    printf("%d", count);
//    return 0;
//}
