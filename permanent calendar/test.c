 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<conio.h>
void menu()
{
	system("cls");
	system("color 06");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t    ************************************\n");
	printf("\t\t\t\t    ******       1.查看年历       ******\n");
	printf("\t\t\t\t    ******       2.查看月历       ******\n");
	printf("\t\t\t\t    ******    3.距离今天还有几天    ****\n");
	printf("\t\t\t\t    ********     4.退出程序        *****\n");
	printf("\t\t\t\t    **********<选择1、2、3、4进入>******\n");
	printf("\t\t\t\t    ************************************\n");
	return;
}
int nowyear() { //获取系统的年份
	time_t rawtime;
	struct tm* timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	return(timeinfo->tm_year + 1900);
}
int nowmonth() { //获取系统的月份
	time_t rawtime;
	struct tm* timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	return(timeinfo->tm_mon+1);
}
int leapyear(int year) {			//判断是否为闰年
	if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0 && year % 400 == 0) return 1;
	else return 0;
}
int monthnum(int year,int month)
{
	int arr1[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int arr2[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int a=leapyear(year);
	if (a == 1)
		return arr2[month];
	else
		return arr1[month];
}
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
void print1(int year, int month, FILE* pc)
{
	switch (month)
	{
	case 1: fprintf(pc, "Jan");
	case 2: fprintf(pc, "\t\t\t\t\t\t\t\tFeb");
	case 3: fprintf(pc, "\t\t\t\t\t\t\t\tMar\n"); break;
	case 4: fprintf(pc, "Apr");
	case 5: fprintf(pc, "\t\t\t\t\t\t\t\tMay");
	case 6: fprintf(pc, "\t\t\t\t\t\t\t\tJun\n"); break;
	case 7: fprintf(pc, "Jul");
	case 8: fprintf(pc, "\t\t\t\t\t\t\t\tAug");
	case 9: fprintf(pc, "\t\t\t\t\t\t\t\tSept\n"); break;
	case 10: fprintf(pc, "Oct");
	case 11: fprintf(pc, "\t\t\t\t\t\t\t\tNov");
	case 12: fprintf(pc, "\t\t\t\t\t\t\t\tDec\n"); break;
	default:
		break;
	}
	//fprintf(pc,"\n");
	fprintf(pc, "Mon\tTue\tWes\tThur\tFri\tSat\tSun");
	fprintf(pc, "\t\tMon\tTue\tWes\tThur\tFri\tSat\tSun");
	fprintf(pc, "\t\tMon\tTue\tWes\tThur\tFri\tSat\tSun\n");
	//第一周
	int space=weekday(year, month);
	for (int i = 1; i < space; i++)
		fprintf(pc, "\t");
	for (int i = 1; i <= 8 - space; i++)
		fprintf(pc, "%d\t", i);

	fprintf(pc,"\t");
	int space1 = weekday(year, month + 1);
	for (int i = 1; i < space1; i++)
		fprintf(pc, "\t");
	for (int i = 1; i <= 8 - space1; i++)
		fprintf(pc, "%d\t", i);

	fprintf(pc, "\t");
	int space2 = weekday(year, month + 2);
	for (int i = 1; i < space2; i++)
		fprintf(pc, "\t");
	for (int i = 1; i <= 8 - space2; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\n");
	//第二周
	for (int i = 9 - space; i <= 15 - space; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\t");
	for (int i = 9 - space1; i <= 15 - space1; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\t");
	for (int i = 9 - space2; i <= 15 - space2; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\n");
	//第三周
	for (int i = 16 - space; i <= 22 - space; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\t");
	for (int i = 16 - space1; i <= 22 - space1; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\t");
	for (int i = 16 - space2; i <= 22 - space2; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\n");
	//第四周
	for (int i = 23 - space; i <= 29 - space; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\t");
	for (int i = 23 - space1; i <= 29 - space1; i++)
	{
		if (i > monthnum(year, month +1))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\t");
	for (int i = 23 - space2; i <= 29 - space2; i++)
		fprintf(pc, "%d\t", i);
	fprintf(pc, "\n");
	//第五周
	for (int i = 30 - space; i <= 36 - space; i++)
	{
		if (i > monthnum(year, month))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\t");
	for (int i = 30 - space1; i <= 36 - space1; i++)
	{
		if (i > monthnum(year, month + 1))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\t");
	for (int i = 30 - space2; i <= 36 - space2; i++)
	{
		if (i > monthnum(year, month + 2))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\n");
	//第六周
	for (int i = 37 - space; i <= 43 - space; i++)
	{
		if (i > monthnum(year, month ))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\t");
	for (int i = 37 - space1; i <= 43 - space1; i++)
	{
		if (i > monthnum(year, month + 1))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\t");
	for (int i = 37 - space2; i <= 43 - space2; i++)
	{
		if (i > monthnum(year, month + 2))
		{
			fprintf(pc, "\t");
		}
		else
			fprintf(pc, "%d\t", i);
	}
	fprintf(pc, "\n");
	

}
void fun1() {
	int year, month;
	printf("请输入年份：\n");
	scanf("%d", &year);
	FILE* pc;
	pc = fopen("myfile.txt", "w");
	fprintf(pc, "(请按住Ctrl键并滚动鼠标滚轮缩小界面查看完整日历)\t\t\t****************************************     %d     ****************************************\n", year);
	for ( month = 1; month <= 12; month += 3) {
		print1(year, month, pc);
	}
	fclose(pc);
	pc = NULL;
	system("color 05");
	printf("——————————%d年的年历以存入myfile.txt文件中————————", year);
	printf("\n\n\n\n\n");
	system("pause");
	system("cls");
}
void fun2() {
	int year, month;
	printf("请输入年份");
	scanf("%d", &year);
	printf("请输入月份");
	scanf("%d", &month);
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("                                        ————%d年%d月的日历————\n", year, month);
	printf("                                 Mon\tTue\tWes\tThur\tFri\tSat\tSun\n                                 ");
	int space = weekday(year, month);
	//第一周
	for (int i = 1; i < space; i++)
		printf("\t");
	for (int i = 1; i <= 8 - space; i++)
		printf("%d\t", i);
	//第二周
	printf("\n                                 ");
	 for (int i = 9 - space; i <= 15 - space; i++)
		printf("%d\t", i);
	//第三周
	printf("\n                                 ");
	for (int i = 9 - space; i <= 15 - space; i++)
		printf("%d\t", i);
	//第四周
	printf("\n                                 ");
	for (int i = 16 - space; i <= 22 - space; i++)
		printf("%d\t", i);
	//第五周
	printf("\n                                 ");
	for (int i = 30 - space; i <= 36 - space; i++)
	{
		if (i > monthnum(year, month))
		{
			printf("\t");
		}
		else
			printf("%d\t", i);
	}
	//第六周
	printf("\n                                 ");
	for (int i = 37 - space; i <= 43 - space; i++)
	{
		if (i > monthnum(year, month))
		{
			printf("\t");
		}
		else
			printf("%d\t", i);
	}
	printf("\n\n\n");
	system("pause");
}
void fun3() {
	int year, month;
	printf("请输入年份:");
	scanf("%d", &year);
	printf("\n");
	printf("请输入月份:");
	scanf("%d", &month);
	printf("\n");

}
int main()
{
	int imput = 0;
	while (1)
	{
		menu();
		imput = _getch();
		if (imput == '0' + 1) {
			system("cls");
			fun1();
		}
		else if (imput == '0' + 2) {
			system("cls");
			fun2();
		}
		else if (imput == '0' + 3) {
			system("cls");
			fun3();
		}
		else if (imput == '0' + 4) {
			break;
		}
		else
			printf("请输入正确选项");
	}

	return 0;
}

