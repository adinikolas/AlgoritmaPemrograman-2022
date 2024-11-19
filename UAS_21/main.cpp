#include <iostream>

using namespace std;

int main()
{
    float angka, total = 0, rata, max, min, range;
    int jumlah;

    cin >> jumlah;
    for (int i = 1; i <= jumlah; i++)
    {

        cin >> angka;
        total = total + angka;

        if (i == 1)
        {
            min = angka;
            max = angka;
        }
        else if (min > angka)
        {
            min = angka;
        }
        else if (max < angka)
        {
            max = angka;
        }
        else{}
    }

    rata = total / jumlah;
    cout << endl;

    cout << rata <<endl;

    range = max-min;
    cout << range << endl;

    return 0;
}
