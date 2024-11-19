#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int arr[] = {3, 19, 11, 4};
    int size_arr = sizeof(arr)/sizeof(arr[0]);

    cout << "Apakah angka 19 ada di arr? " << linearSearch(19, size_arr, arr) << endl;
    cout << "Apakah angka 19 ada di arr? " << linearSearchSentinel(19, size_arr, arr) << endl;

    int arr_urut[] = {3, 4, 11, 19};
    int size_arr_urut = sizeof(arr_urut)/sizeof(arr_urut[0]);
    cout << "Apakah angka 19 ada di arr? " << binarySearch(19, size_arr_urut, arr_urut) << endl;
    return 0;
}
