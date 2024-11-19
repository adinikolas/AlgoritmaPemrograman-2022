#include <iostream>

using namespace std;

//prosedur di sini
void rec_print_all(int data[], int cur, int arrSize)
{
    if(cur==arrSize-1)
        cout << data[cur];
    else{
        cout << data[cur] << " ";
        rec_print_all(data, cur+1, arrSize);
    }
}

int main()
{
    int data1[] = {19, 16, 22, 15, 9, 28, 11};
    int size_data1 = sizeof(data1) / sizeof(data1[0]);
    rec_print_all(data1,0,size_data1);

    return 0;
}
