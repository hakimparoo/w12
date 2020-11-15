#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "string.h"
struct xxx
{
	int num, p;
	char name[30];
}
Emp[10];
void Luf(int);
int main()
{
	int i, max, j, k, l, nub, m;
	
	printf(" \n\t< (NumberStudent) (Name) (Point)> \n");
	max = 0;
	nub = 0;
	for (i = 0;i < 5;i++)
	{
		printf("Enter data < %d > : ", i + 1);
		scanf("%d %s %d", &Emp[i].num, Emp[i].name, &Emp[i].p);
	}
	printf("\n\n");
	printf(" *** Analyzing Data ***\n");
	for (j = 0;j < 5;j++)
	{
		if (Emp[j].p > max)
		{
			max = Emp[j].p;
		}
	}
	for (k = 0;k < 5;k++)
	{
		if (Emp[k].p == max)
		{
			nub++;
		}
	}
	printf("Max marking   = %d points, %d students. \n", max, nub);
	Luf(max);
	return 0;
}
void Luf(int max)
{
	int n = 0;
	for (int m = 0;m < 5;m++)
	{
		if (Emp[m].p == max)
		{
			n++;
			printf("%d. %d %s %d\n", n, Emp[m].num, Emp[m].name, max);
		}
	}
}