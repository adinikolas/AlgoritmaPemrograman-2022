#include <iostream>
/*
PERTEMUAN 2
JUDUL: Jam Menit Detik
*/

using namespace std;

int main()
{
    /*
    //KAMUS
    int x, hh, sisaDetik, mm, ss;

    //ALGORITMA
    cout << "Masukkan detik = ";
    cin >> x;
    hh = x/3600;
    sisaDetik = x%3600;
    mm = sisaDetik/60;
    ss = sisaDetik%60;
    cout << x << " detik sama dengan " << hh << ":" << mm << ":" << ss << endl;
    */
    int posCov[7] = {123, 678, 53, 15, 89, 34, 231}; //positiv Covid Kota Semarang 28 Feb - 6 Maret 2022
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int sumPosCov = 0;
    int maxPosCov = 0;
    int minPosCov = 1000;
    int iMax;
    int iMin;

    for(int i=0; i<7; i++){
        cout << posCov[i];
        if(i<6)
            cout << ", "; //jika di dalam if perintahnya ada 1. boleh tanpa {}
        else
            cout << ". ";
        sumPosCov = sumPosCov + posCov[i];
        if(posCov[i]>maxPosCov){
            maxPosCov = posCov[i];
            iMax = i;
        }
        if(posCov[i]<minPosCov){
            minPosCov = posCov[i];
            iMin = i;
        }
    }
    cout << endl << "Jumlah Positiv Covid Kota Semarang 28 Feb - 6 Maret 2022 = " << sumPosCov << endl;
    cout << "Jumlah positiv covid paling banyak adalah " << maxPosCov << " di hari " << hari[iMax] << endl;
    cout << "Jumlah positiv covid paling sedikit adalah " << minPosCov << " di hari " << hari[iMin] << endl;
    return 0;
}
