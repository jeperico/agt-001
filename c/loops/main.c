#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ex01.c>
#include <ex02.c>

int main() {
    char option = 0;
    do {
        // system("cls");
        printf("CHOISE EXERCICE:\n");
        printf("1. ex.01.c \n");
        printf("2. ex.02.c \n");
        printf("3. ex.03.c \n");
        printf("PRESS 'ESC' TO EXIT!");


        // scanf("%c", &option);
        // printf("%c\n\n\n", option);
        // option = getch();
        // system("cls");

        switch(option) {
            case 1:
                ex01();
                break;
            case 2:
                ex02();
                break;
            default:
                printf("default");
        }

    } while (option != 27);
}
