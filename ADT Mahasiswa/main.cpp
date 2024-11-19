#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    /*Mahasiswa Dilan("A11.123", "Dilan", 100, 100, 100);
    Dilan.print();
    Mahasiswa Milea("A11.124", "Milea", 70, 80, 100);
    Milea.print();*/
    //Memanggil konstruktor dengan inputan

    int jml_mhs, pil;
    Mahasiswa mhs[40]; //pesan objek 40 tempat
    //Memanggil konstruktor tanpa inputan

    cout << "Masukkan banyak mahasiswa = ";
    cin >> jml_mhs;
    for(int i=0; i<jml_mhs; i++) //input data mhs
    {
        cout << "Mahasiswa ke-" << i+1 << endl;
        //menampilkan i+1 tapi tidak merubah nilai i
        cout << "Masukkan NIM (tanpa spasi) = ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama (tanpa spasi) = ";
        cin >> mhs[i].nama;
        cout << "Masukkan Nilai Uts = ";
        cin >> mhs[i].nUts;
        cout << "Masukkan Nilai Uas = ";
        cin >> mhs[i].nUas;
        cout << "Masukkan Nilai Tugas = ";
        cin >> mhs[i].nTugas;
    }
    for(int i=0; i<jml_mhs; i++) //cetak data mhs
    {
        cout << "Mahasiswa ke-" << i+1 << endl;
        mhs[i].print();
    }

    int urutan, pilNil;
    float nilaiBaru;
    char lanjut;

    do{
        cout << "Pilihan\n1. Update nilai\n2. Analisa data\nMasukkan pilihan = ";
        cin >> pil;
        if(pil==1)
        {
            cout << "Mahasiswa urutan ke = ";
            cin >> urutan;      //1     2
            urutan = urutan-1;  //0     1
            cout << "Nilai yang ingin di update\n1. Nilai Uas\n2. Nilai Tugas\nMasukkan pilihan = ";
            cin >> pilNil;
            cout << "Masukkan nilai terbaru = ";
            cin >> nilaiBaru;
            if(pilNil==1)
                mhs[urutan].nUas = nilaiBaru;
            else
                mhs[urutan].nTugas = nilaiBaru;
            mhs[urutan].print();
        }
        else if(pil==2)
        {//pil==2
            float nMax=0, nMin=100, jml=0, nRata=0;
            int iMax, iMin;
            for(int i=0; i<jml_mhs; i++)
            {
                jml += mhs[i].nilaiAkhir();
                if(mhs[i].nilaiAkhir() > nMax)
                {
                    nMax = mhs[i].nilaiAkhir();
                    iMax = i;
                }
                if(mhs[i].nilaiAkhir() < nMin)
                {
                    nMin = mhs[i].nilaiAkhir();
                    iMin = i;
                }
            }//keluar looping for
            cout << "Analisa Data Berdasarkan Nilai Akhir\n";
            cout << "Nilai tertinggi = " << nMax << " diperoleh mahasiswa " << mhs[iMax].nama << endl;
            cout << "Nilai terendah = " << nMin << " diperoleh mahasiswa " << mhs[iMin].nama << endl;
            nRata = jml/jml_mhs;
            cout << "Nilai rata-rata = " << nRata << endl;
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
