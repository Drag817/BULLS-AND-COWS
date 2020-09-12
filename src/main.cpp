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

        if (choice == 1){
		
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
