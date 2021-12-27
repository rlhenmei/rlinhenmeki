 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int h[101],n;
//void swap(int x, int y)
//{
//	int t;
//	t = h[x];
//	h[x] = h[y];
//	h[y] = t;
//	return;
//}
//
//void siftdown(int i)
//{
//	int t, flag = 0;
//	while (2 * i <= n && flag == 0)
//	{
//		if (h[i] < h[2 * i])
//			t = 2 * i;
//		else
//			t = i;
//		if (2 * i + 1 <= n && flag == 0)
//		{
//			if (h[t] < h[2 * i + 1])
//				t = 2 * i + 1;
//		}
//		if (t != i)
//		{
//			swap(t, i);
//			i = t;
//		}
//		else
//			flag = 1;
//	}
//	return;
//}
//void heapsort()
//{
//	while (n > 1)
//	{
//		swap(1, n);
//		n--;
//		siftdown(1);
//	}
//	return;
//
//}
//void creat()
//{
//	int i;
//	for (i = n / 2; i >= 1; i--)
//	{
//		siftdown(i);
//	}
//	return;
//}
//int main()
//{
//	int i, num;
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//		scanf("%d", &h[i]);
//	n = num;
//	creat();
//	heapsort();
//	for (i = 1; i <= num; i++)
//		printf("%d ", h[i]);
//	return 0;
//}
//int f[1001], n, m, sum;
//int getf(int c)
//{
//	if (f[c] == c)
//		return c;
//	else
//	{
//		f[c] = getf(f[c]);
//		return f[c];
//	}
//}
//void merge(int a, int b)
//{
//	int t1, t2;
//	t1 = getf(a);
//	t2 = getf(b);
//	if (t1 != t2)
//	{
//		f[t2] = t1;
//	}
//	return;
//}
//int main()
//{
//	int i, x, y;
//	scanf("%d %d", &n, &m);//n为人数，m为线索
//	for (i = 1; i <= n; i++)
//		f[i] = i;
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d %d", &x, &y);
//		merge(x, y);
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (f[i] == i)
//		{
//			printf("%d ", f[i]);
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
struct edge
{
	int a;
	int b;
	int c;
}e[10];
int n, m;
int f[10], sum, count;
void quicksort(int left, int right)
{
	int i, j;
	struct edge t;
	if (left > right)
		return;
	i = left;
	j = right;
	while (i != j)
	{
		while (e[j].c > e[left].c && i < j)
			j--;
		while (e[i].c < e[left].c && i < j)
			i++;
		if (i < j)
		{
			t = e[i];
			e[i] = e[j];
			e[j] = t;
		}
		t = e[left];
		e[left] = e[i];
		e[i] = t;
	}
	quicksort(left, i - 1);
	quicksort(i + 1, right);
	return;
}
int getf(int x)
{
	if (f[x] == x)
		return x;
	else
	{
		f[x] = getf(f[x]);
		return f[x];
	}
}
int merge(int v, int u)
{
	int t1, t2;
	t1 = getf(v);
	t2 = getf(u);
	if (t1 != t2)
	{
		f[t2] = t1;
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++)
		scanf("%d %d %d", &e[i].a, &e[i].b, &e[i].c);
	quicksort(1, m);
	for (i = 1; i <= n; i++)
		f[i] = i;
	for (i = 1; i <= m; i++)
	{
		if (merge(e[i].a, e[i].b));
		{
			count++;
			sum += e[i].c;
		}
		if (count == n - 1)
			break;
	}
	printf("%d\n", sum);
	printf("%d", count);
	return 0;
}