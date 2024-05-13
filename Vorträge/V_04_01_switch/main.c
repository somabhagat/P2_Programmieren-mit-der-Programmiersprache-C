#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main(void)
{
    system("chcp 1252");
    system("cls");
    int x;
    printf("Geben Sie die erreichten Punkte ein: \n");
    fflush(stdin);
    scanf("%d", &x);

    switch(x)
    {
        case 3:
            printf("Sieg\n");
            break;
        case 1:
            printf("unentschieden\n");
            break;
        case 0:
           printf("Niederlage\n");
           break;
        default:
            printf("Unzulässiger Wert\n");
            break;
    }
    printf("Programm Ende\n\n\n");


    return 0;
}
