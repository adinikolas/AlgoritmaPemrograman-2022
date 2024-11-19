#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int a, b;
    a=10, b=3;

    cout << "Sebelum tukar\na = " << a << "\tb = " << b << endl;
    tukar(a,b);
    cout << "Setelah tukar\na = " << a << "\tb = " << b << endl;
    cout << "===============================\n";

    int arrB[] = {64, 34, 15, 12, 11, 90};
    int sB = sizeof(arrB)/sizeof(arrB[0]);

    cout << "arrB sebelum proses Bubble Sort\n";
    printArray(arrB, sB);
    bubbleSort(arrB, sB);
    cout << "arrB setelah proses Bubble Sort\n";
    printArray(arrB, sB);

    cout << "===============================\n";
    int arrS[] = {6, 28, 3, 22};
    int sS = sizeof(arrS)/sizeof(arrS[0]);

    cout << "arrS sebelum proses Selection Sort\n";
    printArray(arrS, sS);
    selectionSort(arrS, sS);
    cout << "arrS setelah proses Selection Sort\n";
    printArray(arrS, sS);

    cout << "===============================\n";
    int arrI[] = {4, 14, 22, 2};
    int sI = sizeof(arrI)/sizeof(arrI[0]);

    cout << "arrI sebelum proses Insertion Sort\n";
    printArray(arrI, sI);
    insertionSort(arrI, sI);
    cout << "arrI setelah proses Insertion Sort\n";
    printArray(arrI, sI);


    return 0;
}
