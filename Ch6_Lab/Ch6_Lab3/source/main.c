#include<stdio.h>
#include<stdlib.h>

typedef struct _student
{
	char num[7];
	char clas[20];
	char name[20];
	int score[3];
} student;

void sub(student *p);

void main(void)
{
	int i;
	student stu[3] = {  {"970101","�|�l�@��","���p��",61,71,81},
						{"970102","�|�l�@��","������",92,82,72},
						{"970103","�|�l�@��","�i�j��",73,63,83} };

	student *ps;
	ps = stu;
	printf("\n");
	printf("===============================================\n");
	printf("  �Ǹ�     �Z��     �m�W   ���  �^��  �ƾ�\n");
	printf("===============================================\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %5d %5d\n", (ps + i)->num, (ps + i)->clas,
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("�I�s�禡�e\n\n");
	sub(ps);
	printf("\n�I�s�禡��\n");

	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %5d %5d\n", (ps + i)->num, (ps + i)->clas,
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	puts("");
	system("pause");
}

void sub(student *p)
{
	int i;
	for (i = 0; i <= 2; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}