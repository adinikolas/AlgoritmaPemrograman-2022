#include <iostream>

using namespace std;

void rubah_angka(int *ptrAngka, int rubah){
    *ptrAngka = rubah;
}

int main(){
    int angka;
    int *ptrAngka = nullptr;
    ptrAngka = &angka;

    angka = 12;
    printf("%d\n", angka); // 12
    printf("%p\n", ptrAngka); // alamat memori angka
    printf("%d\n", *ptrAngka); // 12

    *ptrAngka = 22;
    printf("%d\n", angka); // 24

    angka = 50;
    printf("%d\n", angka); // 50
    rubah_angka(&angka, 899);
    printf("%d\n", angka); // 899
    return 0;
}
