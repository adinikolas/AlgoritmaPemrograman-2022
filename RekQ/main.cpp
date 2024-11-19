#include <iostream>



using namespace std;

float rec_mean(int data[],int cur,int n)
{
    if (n == 1)
        return (float)data[n-1];
    else
        return ((float)(rec_mean(data, cur+1,n-1)*(n-1) + data[n-1]) / n);
}

int main()

{

    int data1[] = {12, 15, 1, 23, 44, 21, 30};

    int size_data1 = sizeof(data1) / sizeof(data1[0]);

    cout << rec_mean(data1,0,size_data1) << endl;



    return 0;

}
