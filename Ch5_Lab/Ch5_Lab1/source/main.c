#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[],
			const char *wSuit[]);

int main(void)
{
	int row, col;
	int i = 1;
	int deck[4][13];
	const char *suit[4] = { "Hearts","Diamonds","Clubs","Spades" };

	const char *face[13] = 
		{"Ace", "Deuce", "Three", "Four",
		 "Five", "Six", "Seven", "Eight",
		 "Nine", "Ten", "Jack", "Queen", "King"};

	for (row = 0; row < 4; row++)
	{
		for (col = 0; col < 13; col++)
		{
			deck[row][col] = i;
			i++;
		}
	}


	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);
	system("pause");
	return 0;
}

void shuffle(int wDeck[][13])
{
	int i,tmp;
	int row1, row2;
	int col1, col2;
	for (i = 0; i < 1000; i++)
	{
		row1 = rand() % 4;
		col1 = rand() % 13;
		row2 = rand() % 4;
		col2 = rand() % 13;
		tmp = wDeck[row1][col1];
		wDeck[row1][col1] = wDeck[row2][col2];
		wDeck[row2][col2] = tmp;
	}
	//int row;
	//int column;
	//int card;

	//for (card = 1; card <= 52; card++)
	//{
		//do
		//{
		//	row = rand() % 4;
		//	column = rand() % 13;
		//} while (wDeck[row][column] != 0);

	//	wDeck[row][column] = card;
	//}
}

void deal(const int wDeck[][13], const char *wFace[],
			const char *wSuit[])
{
	int card;
	int row;
	int column;
	int a;
	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)
			{
				a = 0;
				if (wDeck[row][column] == card)
				{
					printf("%5s of %-8s%c", wFace[column], wSuit[row],
					card % 2 == 0 ? '\n' : '\t');
					a = 1;
					break;
				}
			}
			if(a==1)
				break;
		}
		
	}
}

//printf("%5s of %-8s%c", wFace[column], wSuit[row],
	//card % 2 == 0 ? '\n' : '\t');