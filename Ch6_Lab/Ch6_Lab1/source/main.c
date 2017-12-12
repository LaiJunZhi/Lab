#include<stdio.h>
#include<stdlib.h>
#include<Information.h>

void main(void)
{
	Person P;

	printf("Please input your name¡G");
	scanf("%s", &P.name);
	printf("Please input your gender¡G");
	scanf("%d", &P.gender);
	printf("Please input your age¡G");
	scanf("%d", &P.age);

	printf("\nHi! %s. ", P.name);
	if (P.gender == 0)
	{
		printf("You are a %d-year-old woman.\n", P.age);
	}
	else
	{
		printf("You are a %d-year-old man.\n", P.age);
	}
	system("pause");
}
