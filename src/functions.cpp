#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void GetRandomNumber(char *num)
{
	char digits[10] = "123456789";
	srand((unsigned)time(0));
	for (unsigned i = 0, rmax = 9; i < 4; i++)
	{
		unsigned r = rand() % rmax--;
		num[i] = digits[r];
		digits[r] = digits[rmax];
	}
}

void GetRandomNumber2(char *num)
{
	char digits[10] = "123456789";
	srand((unsigned)time(0));
	for (unsigned i = 0, rmax = 9; i < 6; i++) {
		unsigned r = rand() % rmax--;
		num[i] = digits[r];
		digits[r] = digits[rmax];
	}
}

void GetRandomNumber3(char *num)
{
	char digits[10] = "123456789";
	srand((unsigned)time(0));
	for (unsigned i = 0, rmax = 9; i < 8; i++) {
		unsigned r = rand() % rmax--;
		num[i] = digits[r];
		digits[r] = digits[rmax];
	}
}

int Menu()
{
    int choise1 = 0, choise2 = 0;
    printf("1.New Game\n");
    printf("2.Game Rules\n");
    printf("3.Exit\n");
    scanf("%d",&choise1);
    switch (choise1) {
	    case 1: {
			system("cls");
			printf("\tSelect difficulty level\n\n");
			printf("1.Easy\n");
			printf("2.Medium\n");
			printf("3.Hard\n");
			printf("4.Back\n");
			scanf("%d",&choise2);
			switch (choise2) {
				case 1: {
				    printf("Hidden number\n");
				    printf("* * * *\n");
				    break;
				}
				case 2: {
				    printf("Hidden number\n");
				    printf("* * * * * *\n");
				    break;
				}
				case 3: {
				    printf("Hidden number\n");
				    printf("* * * * * * * *\n");
				    break;
				}
				case 4: {
				    Menu();
				    break;
				}
			}
			break;
		}
	    case 2: {
	    
			break;
	    }
	    case 3: {
	    
			break;
	    }
    }
    return 0;
}

int main()
{
    Menu();
    return 0;
}
