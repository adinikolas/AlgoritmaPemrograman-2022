#include <iostream>

using namespace std;

//fungsi max2 dan rec_max di sini
int max2(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}
int rec_max(int data[], int cur, int arrSize)
{
    if(cur==arrSize-1)
        return data[cur];
    else
        return max2(data[cur], rec_max(data,cur+1,arrSize));
}

int main()
{
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int size_data1 = sizeof(data1) / sizeof(data1[0]);
    cout << "max array = " << rec_max(data1,0,size_data1) << endl;

    return 0;
}
