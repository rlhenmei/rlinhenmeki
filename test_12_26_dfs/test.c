 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int dis[10], i, k, n, m, a[10], b[10], c[10];
//	int inf = 99999;
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//		scanf("%d %d %d", &a[i], &b[i], &c[i]);
//	for (i = 1; i <= n; i++)
//		dis[i] = inf;//�����1�Ŷ��㵽��������ľ���Ϊ����
//	dis[1] = 0;
//	for(k=1;k<n;k++)
//		for (i = 1; i <= m; i++)
//		{
//			if (dis[b[i]] > dis[a[i]] + c[i])
//				dis[b[i]] = dis[a[i]] + c[i];
//		}
//	for (i = 1; i <= n; i++)
//		printf("%d ", dis[i]);
//	return 0;
//}
int h[101];//������ݵĶ�
int n;//�ѵĴ�С
void swap(int x, int y)
{
	int t;
	t = h[x];
	h[x] = h[y];
	h[y] = t;
	return;
}
void siftdown(int i)
{
	int t, flag = 0;
	//�ж��Ƿ��ж���
	while (i * 2 <= n && flag == 0)
	{
		if (h[i] < h[2 * i])
			t = i;
		else
			t = 2 * i;
		if (2 * i+1 <= n)
		{
			if (h[t] > h[2 * i + 1])
				t = 2 * i + 1;
		}
		if (t != i)
		{
			swap(t, i);
			i = t;
		}
		else
			flag = 1;
	}
	return;
}
void creat()
{
	int i;
	//�����һ����Ҷ�ڵ㵽��һ���ڵ����ν������µ��� 
	for (i = n / 2; i >= 1; i--)//���һ����Ҷ�ڵ����Ϊn/2
	{
		siftdown(i);
	}
	return;
}
int deletemax()
{
	int t;
	t = h[1];
	h[1] = h[n];
	n--;
	siftdown(1);
	return t;
}
int main()
{
	int i, num;
	scanf("%d", &num);
	n = num;
	for (i = 1; i <= num; i++)
		scanf("%d", &h[i]);
	creat();
	for (i = 1; i <= num; i++)
		printf("%d ", deletemax());
	return 0;
}