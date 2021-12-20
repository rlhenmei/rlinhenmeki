 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//struct node
//{
//	int date;
//	struct node* next;
//};
//int main()
//{
//	int n, a, i;
//	struct node *p, *head, *q,*t;
//	head = NULL;
//	q = NULL;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		p = (struct node*)malloc(sizeof(struct node));
//		scanf("%d", &a);
//		p->date = a;
//		p->next=NULL;
//		if (head == NULL)
//			head = p;
//		else
//			q->next = p;
//		q = p;
//	}
//	t = head;
//	while (t!= NULL)
//	{
//		printf("%d ", t->date);
//		t = t->next;
//	}
//	return 0;
//}
//struct node {
//	int date;
//	struct node* next;
//};
//int main()
//{
//	struct node* p,*head,*q=NULL,*t;
//	head = NULL;
//	int n, i, a;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		p = (struct node*)malloc(sizeof(struct node));
//		p->date = a;
//		p->next = NULL;
//		if (head == NULL)
//			head = p;
//		else
//			q->next = p;
//		q = p;
//	}
//	t = head;
//	scanf("%d", &a);
//	while (t != NULL)
//	{
//		if (t->next->date > a || t->next == NULL)
//		{
//			p= (struct node*)malloc(sizeof(struct node));
//			p->date = a;
//			p->next = t->next;
//			t->next = p;
//			break;
//		}
//		t = t->next;
//	}
//	t = head;
//	while (t != NULL)
//	{
//		printf("%d ", t->date);
//		t = t->next;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[20][21] = { 0 };
//	int i,j,x,y, n, m,sum,max=0,q=0,p=0;//n为行，m为列。
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] == '.')
//			{
//				sum = 0;
//				//向上寻找可以消灭的敌人。
//				x = i; y = j;
//				while (arr[x][y] != '#'&&x>=0)
//				{
//					if (arr[x][y] == 'G')
//						sum++;
//					x--;
//				}
//				//向下寻找可以消灭的敌人
//				x = i; y = j;
//				while (arr[x][y] != '#' && x <n)
//				{
//					if (arr[x][y] == 'G')
//						sum++;
//					x++;
//				}
//				//向右寻找可以消灭的敌人。
//				x = i; y = j;
//				while (arr[x][y] != '#' && y < m)
//				{
//					if (arr[x][y] == 'G')
//						sum++;
//					y++;
//				}
//				//向左寻找可以消灭的敌人
//				x = i; y = j;
//				while (arr[x][y] != '#' && y >= 0)
//				{
//					if (arr[x][y] == 'G')
//						sum++;
//					y--;
//				}
//				if (sum > max)
//				{
//					max = sum;
//					p = x;
//					q = y;
//				}
//			}
//		}
//	}
//	printf("把炸弹放在(%d,%d)位置最多可以消灭%d敌人。", p, q, max);
//
//	return 0;
//}
//int main()
//{
//	char arr[10][11] = { 0 };
//	int i = 0;
//	gets(arr);
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//}
//int fun(int x)
//{
//	int num = 0;
//	int f[10] = { 6,2,5,5,4,5,6,3,7,6 };
//	while (x / 10 != 0)
//	{
//		num += f[x % 10];
//		x /= 10;
//	}
//	num += f[x];
//	return num;
//}
//int main()
//{
//	int a, b, c, m, sum=0;
//	scanf("%d", &m);//输入火柴数量；
//	for (a = 0; a <= 1111; a++)
//	{
//		for (b = 0; b <= 1111; b++)
//		{
//			c = a + b;
//			if (fun(a) + fun(b) + fun(c) == m - 4)
//			{
//				printf("%.2d+%.2d=%.2d\n", a, b, c);
//				sum++;
//			}
//		}
//	}
//	printf("%d种拼法", sum);
//
//	return 0;
//}