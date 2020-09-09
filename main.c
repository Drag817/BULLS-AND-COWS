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
        if ((choice != 1))
			break;
		system("PAUSE");
    }
    system("PAUSE");
}