#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
typedef struct PeoInfo {
	char name[20];
	char sex[5];
	char tele[20];
	char addr[20];
	int age;
}PeoInfo;
//ͨѶ¼
typedef struct Contact {
	PeoInfo* date;//ͨѶ¼����
	int sz;//ͨѶ¼�е�����
	int capacity;//ͨѶ¼������
}Contact;
//�����ĳ�ʼ��
void InitContact(Contact* pc);
//ͨѶ¼������
void AddContact(Contact* pc);
//ͨѶ¼����ʾ
void Show(Contact* pc);
//ͨѶ¼��ɾ��
void Delete(Contact* pc);
//ͨѶ¼�Ĳ���
void Search(Contact* pc);
//ͨѶ¼���޸�
void Modify(Contact* pc);
//ͨѶ¼������
/*void Sort(Contact* pc)*/;
//ͨѶ¼������
void check_capacity(Contact* pc);
//free(Contact)
void DestroyContact(Contact* pc);
