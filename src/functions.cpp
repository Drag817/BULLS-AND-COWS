#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void swap(int& x, int& y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}

void Random(int* A, int N)
{
    int i = 0;
    for (int j = 0; j < 10; j++) {
        A[j] = j;
    }
    for (i = 0; i < N * 10; i++) {
        swap(A[rand() % 10], A[rand() % 10]);
    }
}

void AnswerCheck(int* A, int* B, int& bull, int& cow, int N)
{
    bull = 0;
    cow = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                if (i == j)
                    bull++;
                else
                    cow++;
            }
        }
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
				    int N = 4;
				    int A[N];
				    int B[N];
				    Random(A, N);
					printf("\n");
				    int bull = 0, cow = 0;
				    do {
				        printf("Enter four numbers one by one\n");
				        for (int i = 0; i < N; i++) {
                    		cin >> B[i];
				        }
				        AnswerCheck(A, B, bull, cow, N);
				        printf("bull: %d \tcow: %d \n\n",bull,cow);
				    } while (bull <= 3);
				    printf("You win!!! \n");
				}
				case 2: {
				    printf("Hidden number\n");
				    printf("* * * * * *\n");
				    int N = 6;
				    int A[N];
				    int B[N];
				    Random(A, N);
					printf("\n");
				    int bull = 0, cow = 0;
				    do {
				        printf("Enter four numbers one by one\n");
				        for (int i = 0; i < N; i++) {
                    		cin >> B[i];
				        }
				        AnswerCheck(A, B, bull, cow, N);
				        printf("bull: %d \tcow: %d \n\n",bull,cow);
				    } while (bull <= 5);
				    printf("You win!!! \n");
				}
				case 3: {
				    printf("Hidden number\n");
				    printf("* * * * * * * *\n");
				    int N = 8;
				    int A[N];
				    int B[N];
				    Random(A, N);
					printf("\n");
				    int bull = 0, cow = 0;
				    do {
				        printf("Enter four numbers one by one\n");
				        for (int i = 0; i < N; i++) {
                    		cin >> B[i];
				        }
				        AnswerCheck(A, B, bull, cow, N);
				        printf("bull: %d \tcow: %d \n\n",bull,cow);
				    } while (bull <= 7);
				    printf("You win!!! \n");
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
