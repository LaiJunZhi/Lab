#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int grade;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;

	printf("Enter the letter grade.\n");
	printf("Enter the EOF character to end input.\n");

	while ((grade = getchar()) != EOF)
	{
		switch (grade)
		{
		case 'a':
		case 'A':
			aCount++;
			break;
		case 'b':
		case 'B':
			bCount++;
			break;
		case 'c':
		case 'C':
			cCount++;
			break;
		case 'd':
		case 'D':
			dCount++;
			break;
		case 'f':
		case 'F':
			fCount++;
			break;
		case ' ':
		case '\n':
		case '\t':
			break;
		default:
			printf("Incorrect letter grade enrtered.\n");
			printf("Enter a new grade.\n");
			break;
		}
	}

	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);

	system("pause");
	return 0;
}