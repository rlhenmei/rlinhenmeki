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
			printf("���ݳɹ���\n");
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
		printf("ͨѶ¼����\n");
	}*/
	check_capacity(pc);
	printf("����������:");
	scanf("%s", pc->date[pc->sz].name);
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[pc->sz].name, pc->date[i].name) == 0)
		{
			printf("��ϵ���Ѵ���\n");
			return;
		}
	}
	printf("�������Ա�:");
	scanf("%s", pc->date[pc->sz].sex);
	printf("������绰:");
	scanf("%s", pc->date[pc->sz].tele);
	printf("�������ַ:");
	scanf("%s", pc->date[pc->sz].addr);
	printf("����������:");
	scanf("%d", &(pc->date[pc->sz].age));
	pc->sz++;
	printf("�����ϵ�˳ɹ�.\n");
}
void Show(const Contact* pc)
{
	assert(pc);
	printf("%-10s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ��������:\n");
	scanf("%s", &name);
	int pos=FindByname(pc, name);
	if(pos==-1)
	{
		printf("Ҫɾ�����˲����ڣ����������롣\n");
	}
	else
	{
		for (int j = pos; j < pc->sz - 1; j++)
		{
			pc->date[j] = pc->date[j + 1];
		}
		pc->sz--;
		printf("ɾ����ϵ�˳ɹ�.\n");
	}
	return;
}
void Search(Contact* pc)
{
	assert(pc);
	printf("��ѡ����ҵ�;��:\n");
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
		printf("������Ҫ���ҵ����֣�");
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
			printf("���޴���\n");
		break;
	case 2:
		printf("������Ҫ���ҵĵ绰��");
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
			printf("���޴���\n");
		break;
	case 3:
		printf("������Ҫ���ҵĵ�ַ��");
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
			printf("���޴���\n");
		break;
	case 4:
		printf("������Ҫ���ҵ��Ա�");
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
			printf("���޴���\n");
		break;
	case 5:
		printf("������Ҫ���ҵ����䣺");
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
			printf("���޴���\n");
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
		printf("��������Ҫ�޸ĵ�������");
		scanf("%s", Modifyname);
		int i = 0;
		for (i = 0; i < pc->sz; i++)
		{
			if (strcmp(Modifyname, pc->date[i].name) == 0)
			{
				printf("%-15s\t%-5s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
				printf("%-15s\t%-5d\t%-5s\t%-13s\t%-20s\n",
					pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
				break;
			}
		}
		if (i == pc->sz)
		{
			printf("���޴��ˣ�����������\n");
			printf("*****************\n");
			printf("**1.�˳� 2.����**\n");
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
			printf("����������:");
			scanf("%s", pc->date[i].name);
			printf("����������:");
			scanf("%d", &(pc->date[i].age));
			printf("�������Ա�:");
			scanf("%s", pc->date[i].sex);
			printf("������绰:");
			scanf("%s", pc->date[i].tele);
			printf("�������ַ:");
			scanf("%s", pc->date[i].addr);
			printf("�޸ĳɹ�\n");
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