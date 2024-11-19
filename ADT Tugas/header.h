#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class EsKrim{
    public:
    string varian;
    string topping;
    int harga;
    int jml_beli;

    EsKrim(string varian, string topping, int harga, int jml_beli)
    {
        this->varian = varian;
        this->topping = topping;
        this->harga = harga;
        this->jml_beli = jml_beli;
    }
    EsKrim()
    {

    }

    int harga_total()
    {
        return harga * jml_beli;
    }

    void print()
    {
        cout << "===========================================" << endl;
        cout << "Pemesanan Es Krim" << endl;
        cout << "===========================================" << endl;
        cout << "|| Varian Es Krim : " << varian << endl;
        cout << "|| Topping : " << topping << endl;
        cout << "|| Harga : Rp " << harga << endl;
        cout << "|| Jumlah Beli : " << jml_beli << endl;
        int ht = harga_total();
        cout << "|| Harga Total : Rp " << ht << endl;
        cout << "===========================================" << endl;
    }
};

#endif // HEADER_H_INCLUDED
