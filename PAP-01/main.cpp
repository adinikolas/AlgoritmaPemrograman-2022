#include <iostream>
#include <stdio.h>

/* Modul PAP-01 */
void print_identitas();
void print_jumlah(int num1, int num2);
float hitung(int num1, int num2, char op);    //var. char operator tidak dapat dipakai, diganti jadi char op
void print_nama(char nama[]);
int len_text(char text[]);
int max(int arr_num[], int n);

using namespace std;

int main()
{
    print_identitas();

    print_jumlah(3,12);
    print_jumlah(13,19);

    float hasil = hitung(12,15,'+');
    printf("%d %c %d = %2.2f\n", 12, '+', 15, hasil);
    hasil = hitung(12,15,'-');
    printf("%d %c %d = %2.2f\n", 12, '-', 15, hasil);
    hasil = hitung(12,15,'x');
    printf("%d %c %d = %2.2f\n", 12, 'x', 15, hasil);
    hasil = hitung(12,15,'/');
    printf("%d %c %d = %2.2f\n", 12, '/', 15, hasil);

    print_nama("Nikolas Adi Kurniatmaja Sijabat");
    printf("panjang teks \"%s\" adalah %d karakter\n", "Universitas Dian Nuswantoro", len_text("Universitas Dian Nuswantoro"));
    int arr_num[] = {23, 51, 22, 31, 61, 11, 32, 42};

    printf("Nilai tertinggi dari arr_num adalah %d", max(arr_num, 8));
    cout << endl;

    return 0;
}
void print_identitas()    //Tugas 1
{
    cout << "========================================================================" << endl;
    cout << "NIM : A11.2021.13800" << endl;
    cout << "Nama : Nikolas Adi Kurniatmaja Sijabat" << endl;
    cout << "Alamat : Jl. Mandasia Raya No.20, Krapyak, Semarang Barat, Kota Semarang" << endl;
    cout << "========================================================================" << endl;
}
void print_jumlah(int num1, int num2)    //Tugas 2
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}
float hitung(int num1, int num2, char op)    //Tugas 3
{
    switch(op)
    {
        case '+':
            return (float) num1 + num2;
            break;
        case '-':
            return (float) num1 - num2;
            break;
        case 'x':
            return (float) num1 * num2;
            break;
        case '/':
            return (float) num1 / num2;
            break;
        default:
            return 0;
    }
}
void print_nama(char nama[])    //Tugas 4
{
    cout << "Namanya adalah: " << nama << endl;
}
int len_text(char text[])   //Tugas 5
{
    int jumlah = 0;

    for(int i=0; text[i]; i++){
        jumlah = jumlah + 1;
    }
    return jumlah;
}
int max(int arr_num[], int n)   //Tugas 6
{
    int maxArr=0;

    for(int i=0; i<n; i++)
        if(arr_num[i]>maxArr){
            maxArr = arr_num[i];
        }
    return maxArr;
}

