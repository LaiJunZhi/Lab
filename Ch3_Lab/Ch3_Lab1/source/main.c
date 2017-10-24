#include<stdio.h>
#include<stdlib.h>

int Odd(int k);
int Even(int k);
int TotalSum(int k);

void main(void)
{
	int n, Sum;
	char AddChoice;

	printf("1+2+..+n=?�п�Jn=");
	scanf("%d", &n,1);
	scanf("%c", &AddChoice, 1);
	fflush(stdin);
	printf("�аݭn���_�ƩM(O),����(E),�٬O��ƩM(I)?�п��:");
	scanf("%c", &AddChoice,1);

	switch (AddChoice)
	{
	case'O':
		Sum = Odd(n);
		break;
	case'E':
		Sum = Even(n);
		break;
	case'I':
		Sum = TotalSum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�M��%d\n", Sum);
	system("pause");
	return 0;
}

int Odd(int k)
{
	int i, total = 0;
	for (i = 1; i <= k; i++)
		if (i % 2 == 1)
			total += i;
	return total;
}

int Even(int k)
{
	int i, total = 0;
	for (i = 1; i <= k; i++)
		if (i % 2 == 0)
			total += i;
	return total;
}
int TotalSum(int k)
{
	return Odd(k) + Even(k);
}