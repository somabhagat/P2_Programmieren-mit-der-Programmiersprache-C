#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main(void)
{
    int preis, sitze;

    printf("Geben Preis\n");
    fflush(stdin);
    scanf("%d", &preis);

    printf("Geben Anzahl\n");
    fflush(stdin);
    scanf("%d", &sitze);

    if(preis<10000 && sitze>4)
        printf("gekauft\n");
    else
    if(preis<10000 || sitze>4)
        printf("probefahrt\n");
    else
    printf("näh");

    return 0;

}
