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