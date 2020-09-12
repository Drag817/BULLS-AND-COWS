#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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
