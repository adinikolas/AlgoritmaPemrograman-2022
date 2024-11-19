#include <iostream>
//FUNGSI

using namespace std;
//inisialisasi fungsi
int isGenap(int i); //var. i disebut var. formal
float luasLingkaran(float ruji);
float sumArrayFloat(float arrayFloat[], int sizeArray);

float phi = 3.14; //var. global

int main()
{
    int x, xx; // var. lokal
    float r;

    cout << "Masukkan angka = ";
    cin >> x;
    xx = isGenap(x);//memanggil fungsi diletakkan di variabel
                //var x disebut var. aktual
    cout << "Apakah angka " << x << " bilangan genap? " << isGenap(x) << endl;
    //memanggil fungsi di dalam cout
    cout << "Apakah angka " << x << " bilangan genap? " << xx << endl;

    cout << "Masukkan ruji-ruji = ";
    cin >> r;
    cout << "Luas lingkaran dengan ruji-ruji " << r << " adalah " << luasLingkaran(r) << endl;

    float IPK[3] = {4, 3.4, 2.76};
    float jumlahIPK = sumArrayFloat(IPK, 3);
    cout << "Jumlah IPK = " << jumlahIPK << endl;

    float nilai[2] = {100, 95.8};
    cout << "Jumlah nilai = " << sumArrayFloat(nilai,2) << endl;

    return 0;
}
float sumArrayFloat(float arrayFloat[], int sizeArray)
{
    float sum=0;

    for(int i=0; i<sizeArray; i++)
    {
        sum = sum + arrayFloat[i];
    }
    return sum;
}
int isGenap(int i)
{
    if(i%2==0)
        return 1;
    else
        return 0;
}
float luasLingkaran(float ruji)
{
    return phi*ruji*ruji;
}


