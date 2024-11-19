#include <iostream>
#include "header.h"

/* Modul PAP-05 */

using namespace std;

int main()
{
    //Tugas 1
    printf("Tugas 1\n");
    int arr1a[] = { 3, 5, 38, 0, 44, 47 };
    cout << "arr1 = ";
    compress_array (arr1a, 6);
    int arr2a[] = { 3, 0, 44, 38, 0, 5, 47 };
    cout << "arr2 = ";
    compress_array (arr2a, 7);
    int arr3a[] = { 2, 15, 0, 0, 0, 26, 27, 36 };
    cout << "arr3 = ";
    compress_array (arr3a, 8);
    int arr4a[] = { 15, 36, 27, 0, 0, 2, 26 };
    cout << "arr4 = ";
    compress_array (arr4a, 7);

    printf("\n");

    //Tugas 2
    printf("Tugas 2\n");
    int arr1b[] = { 3, 44, 38, 5, 47 };
    selection_sort1(arr1b, 5);
    printArray(arr1b, 5);
    printf("\n");
    int arr2b[] = { 15, 36, 27, 2, 26 };
    selection_sort1(arr2b, 5);
    printArray(arr2b, 5);

    printf("\n");

    //Tugas 3
    printf("Tugas 3\n");
    int arr1c[] = { 3, 44, 38, 5, 47 };
    selection_sort2(arr1c, 5);
    printf("\n");
    int arr2c[] = { 15, 36, 27, 2, 26 };
    selection_sort2(arr2c, 5);

    printf("\n");

    //Tugas 4
    printf("Tugas 4\n");
    int arr1d[] = { 3, 44, 38, 5, 47 };
    printf("Median dari arr1[] = { 3, 44, 38, 5, 47 } adalah %d\n", get_median(arr1d, 5));
    int arr2d[] = { 15, 36, 27, 2, 26 };
    printf("Median dari arr2[] = { 15, 36, 27, 2, 26 } adalah %d\n", get_median(arr2d, 5));

    return 0;
}
