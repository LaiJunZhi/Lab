#include<stdio.h>
#include<stdlib.h>

int Odd(int k);
int Even(int k);
int TotalSum(int k);

void main(void)
{
	int n, Sum;
	char AddChoice;

	printf("1+2+..+n=?請輸入n=");
	scanf("%d", &n,1);
	scanf("%c", &AddChoice, 1);
	fflush(stdin);
	printf("請問要做奇數和(O),偶數(E),還是整數和(I)?請選擇:");
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
		printf("選擇錯誤\n");
		return -1;
	}
	printf("總和為%d\n", Sum);
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