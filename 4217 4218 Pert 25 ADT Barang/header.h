#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string.h>
//4217 4218 Pert 25 ADT Barang

using namespace std;

//struct yang diimplementasikan di
//Pemrograman Berbasis Objek

class Barang{
    public:
    string nama;
    int qty, harga;
    float diskon;
    //variabel atau disebut atribut

    //method konstruktor
    //method yang otomatis dipanggil saat pembuatan objek
    Barang(string nama, int qty, int harga, float diskon)
    {
        this->nama = nama;
        this->qty = qty;
        this->harga = harga;
        this->diskon = diskon;
    }//konstruktor dengan inputan
    Barang() //konstruktor tanpa inputan
    {

    }

    //fungsi dan prosedur disebut method
    void cetak()
    {
        cout << "Barang " << nama << " {" << qty << "} : Rp " << harga << " [diskon : " << int(diskon) << "%]" << endl;
    }

    void setDiskon(int diskon) //method prosedur
    {
        if (diskon<100)
            this->diskon = diskon/100.0;//convert ke float, kalau /100 saja jadi int
            //diskon = diskonnew;
        else
            this->diskon = 0;
        //this->diskon var. diskon milik class
        //diskon var. diskon milik inputan prosedur
        //cout << this->diskon << endl;
    }
    string strDiskon() //method fungsi
    {
        //return string
        return to_string((int)diskon*100)+"%"; //20.00000 -> 20 -> 20%
        //0.2 -> 20 -> 20%
        //akan error, beri #include <string.h> di atas
    }
};

#endif // HEADER_H_INCLUDED
