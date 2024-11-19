#include <iostream>
#include "header.h"
//include pake " untuk memanggil library dalam 1 project
//biasanya library buatan sendiri

using namespace std;


int main()
{
    int a, b;
    a = 3; b = 10;

    cout << "Sebelum tukar\na = " << a << "\tb = " << b << endl;
    tukar(a,b);
    cout << "Setelah tukar\na = " << a << "\tb = " << b << endl;
    cout << "===============================" << endl;

    int arrB[]={33, 28, 3, 22};
    int sB = sizeof(arrB)/sizeof(arrB[0]); //mencari size of array otomatis
    cout << sizeof(arrB) << "/" << sizeof(arrB[0]) << endl;
    //sizeof = menghasilkan size tipedata dalam byte
    //sizeof(arrB) -> 16 karena ada 4 int (tiap int nilai 4)
    //sizeof(arrB[0] -> 4
    // sB = 16/4 = 4

    cout << "Sebelum Sorting menggunakan Bubble\n";
    printArray(arrB, sB);
    cout << "Setelah Sorting menggunakan Bubble\n";
    bubbleSort(arrB, sB);
    printArray(arrB, sB);
    cout << "===============================\n";

    int arrS[] = {10, 42, 30, 3};
    int sS = sizeof(arrS)/sizeof(arrS[0]);

    cout << "arrS sebelum proses selection sort\n";
    printArray(arrS, sS);
    selectionSort(arrS, sS);
    cout << "arrS setelah proses selection sort\n";
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
