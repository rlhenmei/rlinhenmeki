 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int weekday(int year, int month)//根据基姆拉尔森计算公式得知一号周几
{
	if (month == 1 || month == 2)
	{
		month += 12;
		year--;
	}
	int d = (2 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	if (d == 0)
		return 7;
	else
		return d;
}
int main()
{


	int a = weekday(2022, 3);
	printf("%d", a);
	return 0;
}
