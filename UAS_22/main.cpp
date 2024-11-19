#include <iostream>

using namespace std;

int pangkat(int x, int y)
{
    if(y==1)
        return x; //basis
    else
        return x * pangkat(x, y-1); //rekursif
}

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    cout << endl;

    printf("%d", pangkat(x, y));
    cout << endl;

    return 0;
}


