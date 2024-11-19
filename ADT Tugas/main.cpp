#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int jml_esk, pil;
    EsKrim esk[40];

    cout << "Selamat Datang!!" << endl;
    cout << endl;
    cout << "Pesan berapa menu Es Krim? = ";
    cin >> jml_esk;
    cout << endl;
    for(int i=0; i<jml_esk; i++)
    {
        cout << "Es Krim ke-" << i+1 << endl;
        cout << "Masukkan Varian Eskrim (tanpa spasi) = ";
        cin >> esk[i].varian;
        cout << "Masukkan Topping Rasa (tanpa spasi) = ";
        cin >> esk[i].topping;
        cout << "Masukkan Harga Es Krim = ";
        cin >> esk[i].harga;
        cout << "Masukkan Banyak Es Krim = ";
        cin >> esk[i].jml_beli;
        cout << endl;
    }
    for(int i=0; i<jml_esk; i++)
    {
        cout << "Menu ke-" << i+1 << endl;
        esk[i].print();
    }

    int urutan, pilPes;
    int hargaBaru, jml_beliBaru;
    char lanjut;

    do{
        cout << endl;
        cout << "Pilihan\n1. Update Pesanan\n2. Analisa data\nMasukkan pilihan = ";
        cin >> pil;
        if(pil==1)
        {
            cout << "Menu ke = ";
            cin >> urutan;
            urutan = urutan-1;
            cout << "Pesanan yang ingin di update\n1. Harga\n2. Jumlah Beli\nMasukkan pilihan = ";
            cin >> pilPes;
            if(pilPes==1)
            {
                cout << "Masukkan harga terbaru = ";
                cin >> hargaBaru;
                esk[urutan].harga = hargaBaru;
            }
            else
            {
                cout << "Masukkan jumlah beli terbaru = ";
                cin >> jml_beliBaru;
                esk[urutan].jml_beli = jml_beliBaru;
            }
            esk[urutan].print();
        }
        else if(pil==2)
        {
            int menuMax=0, jml=0;
            float nRata=0;
            int iMax;
            for(int i=0; i<jml_esk; i++)
            {
                jml += esk[i].harga_total();
                if(esk[i].harga_total() > menuMax)
                {
                    menuMax = esk[i].harga_total();
                    iMax = i;
                }
            }
            cout << endl;
            cout << "Analisa Data Berdasarkan Menu yang dipesan\n";
            cout << "Menu dengan total pendapatan tertinggi = Rp " << menuMax << " diperoleh Varian " << esk[iMax].varian << endl;
            nRata = jml/jml_esk;
            cout << "Pendapatan rata-rata semua menu = Rp " << nRata << endl;
        }
        else
        {
            cout << "Pilihan Anda salah.\n";
        }
        cout << "Apakah ingin lanjut (y/n) = ";
        cin >> lanjut;
    }while(lanjut=='y');

    return 0;
}
