#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
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
				unsigned bulls(0), cows(0);
				char numbers[2][5];
				int c1;
                GetRandomNumber(numbers[0]);
				while(true)
				{
				 printf("random number\n");
				 printf("Hidden number\n");
				 printf("****\n");
                 printf("vvodi 4 chisla");
                 printf("\n");
				 cin>>numbers[1];
				 if(CheckAnswer(numbers, bulls, cows))
					{
						system("PAUSE");
						return 0;
					}
					printf(" %d bulls and %d cows\n", bulls, cows);
					if (bulls == 4)
					{
						printf("winner winner chiken dinner !!!");
						break;
					}
				 printf("Exit?\n");
					printf("1:Yes\n");
					printf("2:No\n");
					scanf("%d",&c1);

					if(c1 == 1)
					{
						printf("Bye\n");
						break;
					}
				}
				return 0;
			}

			if (choise1 ==2)
			{
				unsigned bulls(0), cows(0);
				char numbers[2][5];
				int c1;
                GetRandomNumber(numbers[0]);
				while(true)
				{
				 printf("random number\n");
				 printf("Hidden number\n");
				 printf("****\n");
                 printf("vvodi 6 chisla");
                 printf("\n");
				 cin>>numbers[1];
				 if(CheckAnswer(numbers, bulls, cows))
					{
						system("PAUSE");
						return 0;
					}
					printf(" %d bulls and %d cows\n", bulls, cows);
					if (bulls == 6)
					{
						printf("winner winner chiken dinner !!!");
						break;
					}
				 printf("Exit?\n");
					printf("1:Yes\n");
					printf("2:No\n");
					scanf("%d",&c1);

					if(c1 == 1)
					{
						printf("Bye\n");
						break;
					}
				}
				return 0;
			}

			if (choise1 ==3)
			{
				unsigned bulls(0), cows(0);
				char numbers[2][5];
				int c1;
                GetRandomNumber(numbers[0]);
				while(true)
				{
				 printf("random number\n");
				 printf("Hidden number\n");
				 printf("****\n");
                 printf("vvodi 8 chisla");
                 printf("\n");
				 cin>>numbers[1];
				 if(CheckAnswer(numbers, bulls, cows))
					{
						system("PAUSE");
						return 0;
					}
					printf(" %d bulls and %d cows\n", bulls, cows);
					if (bulls == 8)
					{
						printf("winner winner chiken dinner !!!");
						break;
					}
				 printf("Exit?\n");
					printf("1:Yes\n");
					printf("2:No\n");
					scanf("%d",&c1);

					if(c1 == 1)
					{
						printf("Bye\n");
						break;
					}
				}
				return 0;
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
