 
#define _CRT_SECURE_NO_WARNINGS 1
int main()
//{
//	int arr[101] = { 0 };
//	int i, j, n, t;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i <= n - 1; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	printf("%d ", arr[1]);
//	for (i = 2; i <= n; i++)
//	{
//		if (arr[i] != arr[i - 1])
//			printf("%d ", arr[i]);
//	}
//	//getchar();
//	return 0;
//}
//int main()
//{
//	int arr[102] = { 0 };
//	int head=1;
//	int n, i;
//	scanf("%d", &n);
//	int tail = n+1;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while (head < tail)
//	{
//		//删除第一个元素并打印
//		printf("%d ", arr[head]);
//		head++;
//		//将第二个元素赋值给tail
//		arr[tail] = arr[head];
//		tail++;
//		//首元素往后移一位
//		head++;
//	}
//	return 0;
//}
//struct queue
//{
//	int arr[102];
//	int head;
//	int tail;
//};
//int main()
//{
//	struct queue q;
//	int i, n;
//	scanf("%d", &n);
//	q.head = 1;
//	q.tail = n + 1;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &q.arr[i]);
//	}
//	while (q.head < q.tail)
//	{
//		printf("%d", q.arr[q.head]);
//		q.head++;
//		q.arr[q.tail] = q.arr[q.head];
//		q.tail++;
//		q.head++;
//	}
//	return 0;
//}
//
