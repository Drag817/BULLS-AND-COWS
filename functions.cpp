#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int Menu()
{
    int P = 0, O = 0;
    printf("1.New Game\n");
    scanf("%d",&P);
    switch (P) {
    case 1: {
        system("cls");
        printf("\tSelect difficulty level\n\n");
        printf("1.Easy\n");
        printf("2.Medium\n");
        printf("3.Hard\n");
        printf("4.Back\n");
        scanf("%d",&O);
        switch (O) {
        case 1: {
            break;
        }
        }
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
