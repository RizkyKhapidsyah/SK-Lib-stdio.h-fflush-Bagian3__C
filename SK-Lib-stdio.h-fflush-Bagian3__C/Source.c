#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char str[20];
    int i;

    for (i = 0; i < 2; i++) {
        scanf("%[^\n]s", str);
        printf("%s\n", str);
        fflush(stdin);
    }

    _getch();
    return 0;
}