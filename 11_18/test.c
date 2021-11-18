 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct s 
//{
//	int a;
//	char c;
//	double b;
//};
//struct stu
//{
//	struct s ss;
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu sd = { {100,'e',3.4}, "zhansan",10,2.0f};
//	printf("%d %c %.2lf %d %s %.2f", sd.ss.a,sd.ss.c,sd.ss.b,sd.age,sd.name,sd.score);
//
//	return 0;
//}
//struct S
//	{
//		int a;
//		char c;
//		double d;
//	};
//	
//	struct Stu
//	{
//		struct S ss;
//		char name[20];
//		int age;
//		float score;
//	}s1, s2;//s1,s2是2个结构体变量，是全局的
//	
//	int main()
//	{
//		int a = 0;
//		int b = 0;
//	
//		struct Stu s = { {100, 'w', 3.14}, "zhansan", 20, 95.5f};//定义一个结构体变量，局部的
//		printf("%d %c %lf %s %d %f\n",s.ss.a, s.ss.c, s.ss.d, s.name, s.age, s.score);
//	
//		return  0;
//	}

struct S
{
	int arr[1000];
	float i;
	char ch[100];
};
void print(struct S tmp)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", tmp.arr[i]);
	}
	printf("\n");
	printf("%f\n", tmp.i);
	printf("%s\n", tmp.ch);
}
void print1(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	puts("");
	printf("%f\n", ps->i);
	printf("%s\n", ps->ch);
}
int main()
{
	struct S s={{1,2,3,4,5,6,7,8,9,10},2.0f,"zhansan"};
	print(s);
	print1(&s);
	return 0;
}
//struct S
//	{
//		int arr[1000];
//		float f;
//		char ch[100];
//	};
//	
//	void print1(struct S tmp)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", tmp.arr[i]);
//		}
//		printf("\n");
//		printf("%f\n", tmp.f);
//		printf("%s\n", tmp.ch);
//	}
//	
//	void print2(struct S* ps)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//		printf("\n");
//		printf("%f\n", ps->f);
//		printf("%s\n", ps->ch);
//	}
//	
//	int main()
//	{
//		struct S s = { {1,2,3,4,5,6,7,8,9,10}, 5.5f, "hello bit" };
//		print1(s);
//		/*print2(&s);*/
//		return 0;
//	}