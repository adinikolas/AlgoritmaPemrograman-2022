#include <iostream>
#include "header.h"
//4217 4218 Pert 25 ADT Barang

using namespace std;

int main()
{
    //Barang laptop("Laptop ROG 15 inch",10,20000000,20);
    Barang laptop; //objek = implementasi dari class //memanggil konstruktor tanpa inputan
    //mengisi variabel/atribut
    laptop.nama = "Laptop ROG 15 inch";
    laptop.qty = 15;
    laptop.harga = 20000000;
    laptop.diskon = 20;
    //laptop.setDiskon(20); //isi variabel diskon dari prosedur
    laptop.cetak(); //memanggil method prosedur

    Barang mouse("Mouse MX Master",20,1000000,0);
    //memanggil konstruktor dengan inputan
    mouse.cetak();
    Barang keyboard("Keychron K3",100,1300000,10);
    keyboard.cetak();

    //Barang keyboard;
    //keyboard.nama = "Keychron K3";
    //keyboard.qty = 20;
    //keyboard.harga = 1300000;
    //keyboard.diskon = 10;
    //keyboard.setDiskon(10);
    //keyboard.cetak();
    return 0;
}
