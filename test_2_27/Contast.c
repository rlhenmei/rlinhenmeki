 #define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void check_capacity(Contact* pc)
{
	assert(pc);
	if (pc->sz == pc->capacity)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(pc->date, sizeof(PeoInfo*) * (pc->capacity + 2));
		if (tmp != NULL)
		{
			printf("增容成功。\n");
		}
		else
		{
			printf("check_capacity()::%s\n", strerror(errno));
		}
	}
}
void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->date);
	pc->date = NULL;
	pc->date = 0;
	pc->sz = 0;
	return;
}
int FindByname(Contact* pc, char name[])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	PeoInfo* tmp = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	if (tmp != NULL)
	{
		pc->date = tmp;
	}
	else
	{
		printf("InitContact()::%s\n", strerror(errno));
		return;
	}
	pc->capacity = 3;
}
void AddContact(Contact* pc,char Addname)
{
	assert(pc);
	
	/*if (pc->sz == 1000)
	{
		printf("通讯录已满\n");
	}*/
	check_capacity(pc);
	printf("请输入名字:");
	scanf("%s", pc->date[pc->sz].name);
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[pc->sz].name, pc->date[i].name) == 0)
		{
			printf("联系人已存在\n");
			return;
		}
	}
	printf("请输入性别:");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入电话:");
	scanf("%s", pc->date[pc->sz].tele);
	printf("请输入地址:");
	scanf("%s", pc->date[pc->sz].addr);
	printf("请输入年龄:");
	scanf("%d", &(pc->date[pc->sz].age));
	pc->sz++;
	printf("添加联系人成功.\n");
}
void Show(const Contact* pc)
{
	assert(pc);
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//Sort(pc);
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n", 
			pc->date[i].name,  pc->date[i].age,pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
	}
}

void Delete(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("请输入要删除的名字:\n");
	scanf("%s", &name);
	int pos=FindByname(pc, name);
	if(pos==-1)
	{
		printf("要删除的人不存在，请重新输入。\n");
	}
	else
	{
		for (int j = pos; j < pc->sz - 1; j++)
		{
			pc->date[j] = pc->date[j + 1];
		}
		pc->sz--;
		printf("删除联系人成功.\n");
	}
	return;
}
void Search(Contact* pc)
{
	assert(pc);
	printf("请选择查找的途径:\n");
	printf("************************\n");
	printf("*****1.name  2.tele*****\n");
	printf("*****3.addr  4.sex *****\n");
	printf("*****5.age         *****\n");
	printf("************************\n");
	int n = 0;
	int count = 0;
	char Searchname[20], Searchtele[10], Searchaddr[15], Searchsex[5];
	int Searchage = 0;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		count = 0;
		printf("请输入要查找的名字：");
		scanf("%s", &Searchname);
		for (int i = 0; i < pc->sz; i++)
		{
			if (strcmp(Searchname, pc->date[i].name) == 0)
			{
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				count++;
			}
		}
		if (count == 0)
			printf("查无此人\n");
		break;
	case 2:
		printf("请输入要查找的电话：");
		scanf("%s", &Searchtele);
		count = 0;
		for (int i = 0; i < pc->sz; i++)
		{
			if (strcmp(Searchtele, pc->date[i].tele) == 0)
			{
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				count++;
			}
		}
		if (count == 0)
			printf("查无此人\n");
		break;
	case 3:
		printf("请输入要查找的地址：");
		scanf("%s", &Searchaddr);
		count = 0;
		for (int i = 0; i < pc->sz; i++)
		{
			if (strcmp(Searchaddr, pc->date[i].addr) == 0)
			{
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				count++;
			}
		}
		if (count == 0)
			printf("查无此人\n");
		break;
	case 4:
		printf("请输入要查找的性别：");
		scanf("%s", &Searchsex);
		count = 0;
		for (int i = 0; i < pc->sz; i++)
		{
			if (strcmp(Searchsex, pc->date[i].sex) == 0)
			{
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				count++;
			}
		}
		if (count == 0)
			printf("查无此人\n");
		break;
	case 5:
		printf("请输入要查找的年龄：");
		scanf("%d", &Searchage);
		count = 0;
		for (int i = 0; i < pc->sz; i++)
		{
			if (Searchage==pc->date[i].age)
			{
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				count++;
			}
		}
		if (count == 0)
			printf("查无此人\n");
		break;
	default:
		break;
	}
	return;
}
void Modify(Contact* pc)
{
	assert(pc);
	while (1)
	{
		char Modifyname[20] = { 0 }, Modifysex[5], Modifyaddr[20], Modifytale[13];
		int Modifyage = 0;
		printf("请输入你要修改的姓名：");
		scanf("%s", Modifyname);
		int i = 0;
		for (i = 0; i < pc->sz; i++)
		{
			if (strcmp(Modifyname, pc->date[i].name) == 0)
			{
				printf("%-15s\t%-5s\t%-5s\t%-13s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				break;
			}
		}
		if (i == pc->sz)
		{
			printf("查无此人，请重新输入\n");
			printf("*****************\n");
			printf("**1.退出 2.继续**\n");
			printf("*****************\n");
			int n = 0;
			scanf("%d", &n);
			if (n == 1)
				return;
			else if (n == 2)
				continue;
		}
		else
		{
			printf("请输入姓名:");
			scanf("%s", pc->date[i].name);
			printf("请输入年龄:");
			scanf("%d", &(pc->date[i].age));
			printf("请输入性别:");
			scanf("%s", pc->date[i].sex);
			printf("请输入电话:");
			scanf("%s", pc->date[i].tele);
			printf("请输入地址:");
			scanf("%s", pc->date[i].addr);
			printf("修改成功\n");
			return;
		}
	}
}
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//void Sort(Contact* pc)
//{
//	assert(pc);
//
//	qsort(pc->date->name, pc->sz, sizeof(PeoInfo*), cmp);
//	return;
//}