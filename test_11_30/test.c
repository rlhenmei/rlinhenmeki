 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int arr[30][30] = { 0 };
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0 || j == i)
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        puts("");
//    }
//    return 0;
//}
//int main()
//{
//    char arr[3][3] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%c", &arr[i][j]);
//            getchar();
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//        {
//            if (arr[i][0] == 'K')
//            {
//                puts("KiKi wins!");
//                return 0;
//            }
//            else if (arr[i][0] == 'B')
//            {
//                puts("BoBo wins!");
//                return 0;
//            }
//        }
//        else if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
//        {
//            if (arr[0][i] == 'K')
//            {
//                puts("KiKi wins!");
//                return 0;
//            }
//            else if (arr[0][i] == 'B')
//            {
//                puts("BoBo wins!");
//                return 0;
//            }
//        }
//    }
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
//    {
//        if (arr[0][0] == 'K')
//        {
//            puts("KiKi wins!");
//            return 0;
//        }
//        else if (arr[0][0] == 'B')
//        {
//            puts("BoBo wins!");
//            return 0;
//        }
//    }
//    if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
//    {
//        if (arr[0][2] == 'K')
//        {
//            printf("KiKi wins!");
//            return 0;
//        }
//        else if (arr[0][2] == 'B')
//        {
//            printf("BoBo wins!");
//            return 0;
//        }
//    }
//    puts("No winner!");
//    return 0;
//}
//int qiuhe(int n)
//{
//    if (n == 1)
//        return 1;
//    else
//        return n+qiuhe(n - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int c = qiuhe(n);
//    printf("%d", c);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int m = 0;
//    int j = 0;
//    int q = 0;
//    scanf("%d:%d", &i, &n);
//    scanf("%d", &m);
//    j = m + n;
//    if (j > 60)
//    {
//        q = j / 60;
//        j = j % 60;
//    }
//    printf("%02d:%02d", (i + q) % 24, j);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = n / 12;
//    printf("%d", 4 * m + 2);
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	scanf("%d", &arr[0]);
//	printf("%d", arr[0]);
//	return 0;
//}
//int main()
//{
//    char arr[8000] = { 0 };
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    int m = 0;
//    for (i = 0; i < 8000; i++)
//    {
//        scanf("%c", &arr[i]);
//        if (arr[i] == '\n')
//        {
//            j = i;
//            break;
//        }
//    }
//    int count = 0;
//    for (i = 0; i <= j - 2; i++)
//    {
//        for (n = i + 1; n < j; n++)
//        {
//            for (m = i + 2; m <= j; m++)
//            {
//                if (arr[i] == 'C' && arr[n] == 'H' && arr[m] == 'N')
//                {
//                    count++;
//                }
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//int main()
//{
//    char arr[8000] = { 0 };
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    int m = 0;
//    gets(arr);
//    j = strlen(arr);
//    int count = 0;
//    for (i = 0; i <= j - 2; i++)
//    {
//        if (arr[i] == 'C')
//        {
//            for (n = i + 1; n <= j - 1; n++)
//            {
//                if (arr[n] == 'H')
//                {
//                    for (m = n + 1; m <= j; m++)
//                    {
//                        if (arr[m] == 'N')
//                        {
//                            count++;
//                        }
//                    }
//                }
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//int main()
//{
//    char arr[8000] = { 0 };
//    gets(arr);
//    long long c = 0, ch = 0, chn = 0;
//    int i = 0;
//    for (i = 0; arr[i] != '\0'; i++)
//    {
//        if (arr[i] == 'C')
//        {
//            c++;
//        }
//        else if (arr[i] == 'H')
//        {
//            ch += c;
//        }
//        else if (arr[i] == 'N')
//        {
//            chn += ch;
//        }
//    }
//    printf("%lld", chn);
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	getchar();
//	while (n)
//	{
//		char arr[100000] = { 0 };
//		gets(arr);
//		count = 0;
//		int m = strlen(arr);
//		for (i = 0; i <= m - 2; i++)
//		{
//			if (arr[i] == '9' && arr[i + 1] == '9' && arr[i + 2] == '6')
//			{
//				count++;
//			}
//		}
//		printf("%d\n", count);
//		n--;
//	}
//	return 0;
//
//}
//int main()
//{
//	/*int a, b = 1, c = 2;
//	a = (b + c, a + b, c + 3);
//	c = (c) ? a++ : b--;
//	printf("%d", c);*/
//	/*int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//
//	printf("%d", c);*/
//
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d", &n, &c, &d);
//	int arr[100] = { 0 };	
//	int m = 0;
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int max = 0;
//	for(i=0;scanf("%d %d %d", &m, &a, &b) != EOF;i++)
//	{
//		arr[i] = (c * a) / d + ((d - c) * b) / d;
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if(max==arr[i])
//			{
//			printf("%d", i);
//			break;
//			}
//	}
//	return 0;
//}
//int main()
//{
//
//
//
//
//
//
//
//	return 0;
//}
int arr[100000][3] = { 0 };
int arr1[100000] = { 0 };
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < n-1; i++)
		{
			if (arr[i][j] == arr[i + 1][j]);
			{
				arr1[arr[i][j]] = 1;
			}
		}
	}
	for (m = 0; m < 100000; i++)
	{
		if (arr1[m] == 1)
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if (arr[i][j] == m)
					{
						arr[i][j] = 0;
					}
				}
			}
		}
	}
	int max = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 0; j < 3; j++)
		{
			if (arr[j][i] !=0)
			{
				count++;
			}
		}
		if (count > max)
		{
			max = count;
		}
	}
	printf("%d", max);
	return 0;
}