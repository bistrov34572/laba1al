#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include<stdio.h>
#include<time.h>
#include<iostream>
#include <windows.h>
#include <locale.h>
int main()
{
	setlocale(0, "RUS");
	int x;
	printf("������� ������ �������:");
	scanf("%d", &x);
	int* p = new int[x];
	printf("��� ������: ");
	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		p[i] = rand() % 30;
		printf(" %d", p[i]);
	}
	int max = 0, min = 36;

	for (int i = 0; i < x; i++) {
		if (p[i] > max)max = p[i];
		if (p[i] < min)min = p[i];
	}
	printf("\nMax = %d, min = %d\n", max, min);
	printf("������� ����� ���������� � ���������� ���������� �������=%d\n", max - min);
	system("pause");
	system("cls");
	int m, n;
	int** arr;
	int* sum;
	printf("������� ���������� ��������: ");
	scanf("%d", &m);
	printf("������� ����������  �����: ");
	scanf("%d", &n);
	sum = (int*)malloc(m * sizeof(int));
	arr = (int**)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		sum[i] = 0;
		arr[i] = (int*)malloc(m * sizeof(int));
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 15;
			printf("%d\t", arr[i][j]);
			sum[i] = sum[i] + arr[i][j];
		}
		printf("\t C����=%d\t\n", sum[i]);

	}

	system("pause");
	system("cls");

	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct student
	{
		char famil[20];
		char name[20];
		int Nomzach;
		int age;
	} stud[3];

	for (i = 0; i < 3; i++)
	{
		printf("������� ������� ��������\n"); scanf("%20s", stud[i].famil);
		printf("������� ��� �������� %s\n", stud[i].famil); scanf("%20s", stud[i].name);
		_flushall();
		printf("������� ������� %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].age);
		printf("������� ����� �������� ������ %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
		system("cls");
	}
	for (i = 0; i < 3; i++)
	{
		printf("C������ %s %s %d ���, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,
			stud[i].age, stud[i].Nomzach);
	}

	char str[20];
	int K = 0;
	printf("\n������� ������� �������� �������� �� ������ �����:");
	scanf("%20s", str);
	for (i = 0; i < 3; i++) {
		if (strcmp(str, stud[i].famil) == 0) {
			K = 1;
			printf("������� �������� �� ������: \n������� %s %s %d ���, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,
				stud[i].age, stud[i].Nomzach);
		}
	}
	if (K == 0)
		printf("����� ������� �� ������.");
	system("pause");
}