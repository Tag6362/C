#include <stdio.h>
#include <stdlib.h>
#include "selection.h"
#include "tableFunctions.h"



void int_table_printer(int table[], int tableSize);
int int_table_minimum_start_ind (int table[], int tableSize, int startInd);
int int_del (int table[], int tableSize, int delInd);

int main () {
    int table[] = {66, -12, 42, 0, 57, -1, 180, 77};

    int table2[7] = {0};

    *table = int_del(table,8, 2);


    int_table_printer(table, 7);

    printf("%d\n", int_table_minimum_start_ind(table, 8, 0));

    return 0;
}
