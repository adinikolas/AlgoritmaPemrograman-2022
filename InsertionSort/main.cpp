#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int arrI[] = {9, 12, 7, 15};
    int sI = sizeof(arrI)/sizeof(arrI[0]);

    cout << "arrI sebelum proses Insertion Sort\n";
    printArray(arrI, sI);
    insertionSort(arrI, sI);
    cout << "arrI setelah proses Insertion Sort\n";
    printArray(arrI, sI);

    return 0;
}
