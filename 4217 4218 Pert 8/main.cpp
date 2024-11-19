#include <iostream>

using namespace std;
int tukar(int x, int y);

int main()
{
    int a,b;
    a = 10;
    b = 3;
    cout << "Sebelum tukar \na = " << a << "\tb = " << b << endl;
    tukar(a,b);

}
int tukar(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Setelah tukar \na = " << x << "\tb = " << y << endl;
}
