void int_table_printer(int table[], int tableSize) {
    printf("[%d, ", table[0]);
    for (int i = 1; i < tableSize-1; i++) {
        printf("%d, ", table[i]);
    }
    printf("%d]\n", table[tableSize-1]);
}

int int_table_minimum_start_ind (int table[], int tableSize, int startInd) {
    int ind = startInd;
    int mini = table[ind];
    for (int i = startInd; i < tableSize; i++) {
        if (mini > table[i]) {
                ind = i;
                mini = table[i];
        }
    }
    return ind;
}

int int_del (int table[], int tableSize, int delInd) {
    int tableRet[7] = {0};

    for (int i = 0; i < delInd; i++) {
        tableRet[i] = table[i];
    }
    for (int i = delInd+1; i < tableSize; i++) {
        tableRet[i] = table[i];
    }
    return tableRet;
}

