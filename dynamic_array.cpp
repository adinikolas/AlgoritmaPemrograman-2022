#include <iostream>

using namespace std;

void print_array(int *data, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

/*
Fungsi untuk mengembalikan array yang terisi dari 1 - ukurannya
*/
int * gen_return(int size){
    int *result = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        result[i] = i+1;
    }

    return result;
}

int main(){
    int *p_array = (int *)malloc(10 * sizeof(int));
    p_array[0] = 8;
    p_array[8] = 19;

    printf("%d\n", p_array[0]);
    printf("%d\n", p_array[8]);

    p_array = (int *)malloc(20 * sizeof(int));
    p_array[15] = 99;
    printf("%d\n", p_array[15]);
    printf("%d\n", p_array[5]);

    int arr1[] = {78, 96, 57, 99, 10};
    print_array(arr1, 5);

    int *arrPtr = gen_return(25);
    print_array(arrPtr, 25);

    return 0;
}