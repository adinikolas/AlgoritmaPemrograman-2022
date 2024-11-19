#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
14 Maret 2022 - Pertemuan 5
Fungsi Prosedur
*/

int Max2(int angka1, int angka2); //ini fungsi, kata pertama tergantung var. return
void Max2P(int angka1, int angka2);//ini prosedur, kata pertama itu void

using namespace std;

int main()
{
    char nama[50] = "Nikolas Adi Kurniatmaja Sijabat"; //array of char = string
    char univ[50];
    strcpy(univ, "Universitas Dian Nuswantoro"); //prosedur

    printf("Nama \t = %s\n", nama);
    printf("Kampus\t = %s\n", univ);
    //%d = int, %f = float, %c = char
    //strcpy(nama, univ);
    cout << "Nama \t = " << nama << endl;

    printf("Banyak huruf pada string nama = %d, dan string univ = %d\n", strlen(nama), strlen(univ));

    strcat(nama, univ); //prosedur
    printf("Hasil penggabungan = %s\n", nama);
    //char namaLwr[100] = strlwr(nama);
    printf("Nama uppercase = %s\n", strupr(nama));
    printf("Nama lowercase = %s\t Jumlah string nama sekarang = %d\n", strlwr(nama), strlen(nama));


    int x,y;
    float z, akarZ;
    printf("x = "); scanf("%d", &x);
    printf("y = "); scanf("%d", &y);
    printf("%d pangkat %d = %.2f\n", x, y, pow(x, y));
    printf("(Dari fungsi) Nilai terbesar dari x dan y adalah %d\n", Max2(x,y));
                                                    // x, y = var. aktual
    //Max2 fungsi, jadi memanggilnya harus sejajar dengan output (printf atau cout)
    //atau letakkan di variabel
    printf("(Dari prosedur) Nilai terbesar dari x dan y adalah ");
    Max2P(x,y); //prosedur - berdiri sendiri
    //tidak sejajar dengan output atau diletakkan di variabel

    printf("\nMenghitung akar\nz = ");
    scanf("%f", &z);
    akarZ = sqrt(z); //memanggil fungsi yang diletakkan di variabel
    printf("Hasil akar %f = %.3f\n", z, akarZ);

    return 0;
}
int Max2(int angka1, int angka2)//angka1 angka2 = variabel formal
{
    if(angka1 >= angka2)
        return angka1;
    else
        return angka2;
}
void Max2P(int angka1, int angka2) //prosedur, tanpa mengembalikan nilai
{
    if(angka1 >= angka2)
        //printf("%d\n", &angka1);
        cout << angka1 << endl;
    else
        //printf("%d\n", &angka2);
        cout << angka2 << endl;
}
