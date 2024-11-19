#include <iostream>

using namespace std;

void tukar(int &a, int &b) //& untuk mengambil alamat memori
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n = 4;
    float pi = 3.14159;
    int *pn = &n; //pointer pn berisi alamat dari integer n
    float *ppi = &pi; //pointer ppi berisi alamat dari float pi

    cout << n << " alamatnya " << &pn << endl;
    cout << pi << " alamatnya " << &ppi << endl;

    string mafa = "Bakso";
    string *pmafa = &mafa;

    cout << mafa << " alamatnya " << &pmafa << endl;
    *pmafa = "Mie";
    cout << mafa << " alamatnya " << &pmafa << endl;

    int a = 123, b = 456;
    cout << "Sebelum tukar\ta = " << a << ", b = " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Setelah tukar\ta = " << a << ", b = " << b << endl;

    int c = 19, d = 90;
    cout << "Sebelum tukar\tc = " << c << ", d = " << d << endl;
    tukar(c,d);
    cout << "Setelah tukar\tc = " << c << ", d = " << d << endl;

    return 0;
}
