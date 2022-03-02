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
//通讯录
typedef struct Contact {
	PeoInfo* date;//通讯录数据
	int sz;//通讯录中的人数
	int capacity;//通讯录的容量
}Contact;
//函数的初始化
void InitContact(Contact* pc);
//通讯录的增加
void AddContact(Contact* pc);
//通讯录的显示
void Show(Contact* pc);
//通讯录的删除
void Delete(Contact* pc);
//通讯录的查找
void Search(Contact* pc);
//通讯录的修改
void Modify(Contact* pc);
//通讯录的排序
/*void Sort(Contact* pc)*/;
//通讯录的增容
void check_capacity(Contact* pc);
//free(Contact)
void DestroyContact(Contact* pc);
