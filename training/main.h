void table_printer(int table[], int tableSize) {
    printf("Table is: [");
    for (int i = 0; i < tableSize-1; i++) {
        printf("%d, ", table[i]);
    }
    printf("%d]\n", table[tableSize-1]);
}


