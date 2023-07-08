#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#define Max 1000
#define Maxname 20
#define Maxsex 10
#define Maxnum 10 
#define Maxaddr 20

struct list
{
	char name[Maxname];
	int age;
	char sex[Maxsex];
	char num1[Maxnum];
	char addr[Maxaddr];
};


void Add(struct list* list1,int* num);
void Del(struct list* list1,int* num);
void Srch(struct list* list1,int* num);
void Modif(struct list* list1,int* num);
void Show(struct list* list1,int* num);
