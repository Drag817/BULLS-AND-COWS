#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice;
	while (1)
	{
		//system("cls");
		printf("1:New game\n");
		printf("2:Game rules\n");
		printf("3:Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
		{
			int choise1;
			//system("cls");
			printf("Select difficulty level\n");
			printf("1:Easy(4 numbers)\n");
			printf("2:Medium(6 numbers)\n");
			printf("3:Hard(8 numbers)\n");
			scanf("%d", &choise1);

            if (choise1 == 1)
			{
				int choise3;
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
			printf("****\n");
		}
		if ((choice != 1) && (choice != 2))
			break;
	//	system("PAUSE");
    }
   // system("PAUSE");
}