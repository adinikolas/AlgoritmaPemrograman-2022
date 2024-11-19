#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int arr_urut[] = {5, 9, 14, 20};
    int size_arr_urut = sizeof(arr_urut)/sizeof(arr_urut[0]);
    cout << "Apakah angka 21 ada di arr? " << binarySearch(19, size_arr_urut, arr_urut) << endl;
    return 0;
}
