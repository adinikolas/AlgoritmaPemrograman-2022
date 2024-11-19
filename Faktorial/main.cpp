#include <iostream>

using namespace std;

int Faktorial(int n)
{
    if(n==0)
        return 1;
    else
        return n * Faktorial(n-1);
}

int main()
{
    cout << "0! = " << Faktorial(0) << endl;
    return 0;
}
