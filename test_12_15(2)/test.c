 
#define _CRT_SECURE_NO_WARNINGS 1
int main()
//{
//	int n,i,left=0,right=1,count=1,max=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while (right < n)
//	{
//		
//			if (arr[right] - arr[left] == 1)
//			{
//				count++;
//				left++;
//				right++;
//			}
//			else
//			{
//				max = count > max ? count : max;
//				left++;
//				right++;
//				count = 1;
//			}
//			
//
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c = a * 10 + b;
//    printf("%d", c / 19);
//    return 0;
//}
//int main()
//{
//    int n;
//    double a;
//    scanf("%d", &n);
//    if (n <= 150)
//    {
//        a = n * 0.4463;
//        printf("%.1lf", a);
//    }
//    else if (n > 150 && n <= 400)
//    {
//        a = (n-150) * 0.4663+150*0.4463;
//        printf("%.1lf", a);
//    }
//    else if (n > 400)
//    {
//        a = (n-400) * 0.5663+ 150 * 0.4463+250* 0.4663;
//        printf("%.1lf", a);
//    }
//    return 0;
//}
//int main()
//{
//    int n, count = 0;
//    float i = 2, sum = 0;
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
//int main()
//{
//	int x, n,i,sum=0;
//	scanf("%d %d", &x, &n);
//	for (i = 0; i < n; i++)
//	{
//		if (i != 6 && i != 7)
//		{
//			sum += 250;
//			x++;
//		}
//		else if (i == 6)
//			x++;
//		else if (i == 7)
//			x = 1;
//	}
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int s, x;
	double sum = 7.0;
	scanf("%d %d", &s, &x);
	int i = 7;
	while (sum < s - x)
	{
		i *= 0.98;
		sum += i;
	}
	double c = (s + x) - sum;
	if (c / i >= 1)
		printf("y");
	else
		printf("n");

	return 0;
}
