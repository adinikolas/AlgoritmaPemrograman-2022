#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

void tukar(int &x, int &y) //& untuk mengambil alamat memori
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;

    for(i = 0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                tukar(arr[j], arr[j+1]);
            }
        }
    }
}
void printArray(int arr[], int n)
{
    int i;

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    for(i=0; i<n-1; i++)
    {
        min_idx = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        //tukar(arr[min_idx], arr[i]);
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        //tanpa & karena langsung dalam 1 fungsi/prosedur
        //kemarin pakai & karena swap melalui fungsi/prosedur
    }
}
void insertionSort(int arr[], int n)
{
    int i, j, key;

    for(i=1; i<n; i++)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

#endif // HEADER_H_INCLUDED
