#include <iostream>
#include "header.h"

/* Modul PAP-04 */

using namespace std;

int main()
{
    //Tugas 1
    printf("Tugas 1\n");
    int a1[10] = {NULL}; a1[0]=1; a1[1]=2; a1[2]=3; a1[3]=4; a1[4]=5; a1[5]=6;
    printf("Jumlah index a1 yang terisi adalah %d\n", count_array(a1, 10));
    int a2[10] = {NULL}; a2[0]=1; a2[1]=2; a2[2]=3; a2[3]=4;
    printf("Jumlah index a2 yang terisi adalah %d\n", count_array(a2, 10));
    int a3[10] = {NULL}; a3[0]=2; a3[1]=4; a3[2]=9; a3[3]=5; a3[4]=1;
    printf("Jumlah index a3 yang terisi adalah %d\n", count_array(a3, 10));
    int a4[10] = {NULL}; a4[0]=2; a4[1]=8; a4[2]=5;
    printf("Jumlah index a4 yang terisi adalah %d\n", count_array(a4, 10));
    printf("\n");

    //Tugas 2
    printf("Tugas 2 (true = 1, false = 0)\n");
    int arr3[] = { 2, 15, 26, 27, 36 };
    printf("Urutan arr3[] = { 2, 15, 26, 27, 36 } bernilai %d\n", cek_urut(arr3, 5));
    int arr4[] = { 15, 36, 27, 2, 26 };
    printf("Urutan arr4[] = { 15, 36, 27, 2, 26 } bernilai %d\n", cek_urut(arr4, 5));

    printf("\n");

    printf("Tugas 3\n");
    //Tugas 3
    int arr1[] = { 3, 44, 38, 5, 47 };
    bubble_sort1(arr1, 5);

    printf("\n");

    printf("Tugas 4\n");
    //Tugas 4
    int arr2[] = { 15, 36, 27, 2, 26 };
    bubble_sort2(arr2, 5);

    return 0;
}
