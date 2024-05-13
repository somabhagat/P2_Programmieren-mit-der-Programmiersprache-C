#include <stdio.h>
#include <windows.h>
 
int main(void)
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252); system("cls");

    int x;

    printf("Geben Sie die erreichten Punkte ein: ");
    fflush(stdin);
    scanf("%d", &x);
    
    if (x == 3)
        printf("Sieg\n");           // dann-Zweig
    else
    {
        if (x == 1)
            printf("unentschieden\n");
        else
        {
            if (x == 0)
                printf("Niederlage\n");
            else
                printf("unzulässiger Wert\n");
        }
    }
    
    printf("ProgrammEnde\n");

    printf("\n\n");
    return 0;
}