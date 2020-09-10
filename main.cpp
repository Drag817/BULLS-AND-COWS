#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

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

int main()
{
    int choice;
	while (1)
	{
		printf("1:New game\n");
		printf("2:Game rules\n");
		printf("3:Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
		{
			int choise1;
			printf("Select difficulty level\n");
			printf("1:Easy(4 numbers)\n");
			printf("2:Medium(6 numbers)\n");
			printf("3:Hard(8 numbers)\n");
			scanf("%d", &choise1);

            if (choise1 == 1)
			{
				char numbers[2][5];
                GetRandomNumber(numbers[0]);
				while(1)
				{
				int choise3;
				printf("random number\n");
                printf("vvodi 4 chisla");
                printf("\n");
                //scanf("%d", &numbers[1]);
				std::cin>>numbers[1];
				printf("Hidden number\n");
				printf("****\n");
				printf("Exit?\n");
				printf("1:Yes\n");
				scanf("%d",&choise3);

				if (choise3 == 1)
				{
				printf("Good bye\n");
				break;
				}
				}
			}

			if (choise1 ==2)
			{
				int choise3;
				printf("Hidden number\n");
				printf("******\n");
				printf("Exit?\n");
				printf("1:Yes\n");
				scanf("%d",&choise3);

				if (choise3 == 1)
				{
				printf("Good bye\n");
				break;
				}
			}

			if (choise1 ==3)
			{
				int choise3;
				printf("Hidden number\n");
				printf("********\n");
				printf("Exit?\n");
				printf("1:Yes\n");
				scanf("%d",&choise3);

				if (choise3 == 1)
				{
				printf("Good bye\n");
				break;
				}
			}
        }
      	else if (choice == 2)
		{
			printf("Game rules\n");
		}
		else if (choice == 3)
		{
			printf("Good bye\n");
		}
		if ((choice != 1) && (choice != 2))
			break;
    }
}