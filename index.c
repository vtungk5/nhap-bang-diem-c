#include <stdio.h>

#define ROWS 7
#define COLS 7
#ifdef _WIN32
#include <Windows.h>
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

void printTable(float table[ROWS][COLS], int rows, int cols)
{
    printf("Hoc vien :  CF   :   C   :  HDJ  :   DU  : RDBMS :  JAVA :   TB\n");

    printf("-------------------------------------------------------------------\n");

    for (int i = 0; i < rows; i++)
    {
        printf("HV %d    ", i + 1);
        for (int j = 0; j < cols; j++)
        {
            printf(" :%6.2f", table[i][j]);
        }
        puts("");
    }
}

int main()
{
    float table[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Nhap diem mon thu %d cho Hoc vien thu%d: ", j + 1, i + 1);
            scanf("%f", &table[i][j]);
        }
    }
    system(CLEAR_SCREEN);

    printTable(table, ROWS, COLS);

    return 0;
}