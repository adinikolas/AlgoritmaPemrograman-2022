#include <iostream>
/*
16 Maret 2022

*/

using namespace std;
float NilaiAkhir(float N_Tugas, float N_UTS, float N_UAS); //fungsi
char GradeNilai(float NilaiAkhir); //fungsi
void CetakNilai(float N_Tugas, float N_UTS, float N_UAS); //prosedur
void InputNilai(); //prosedur baru

float tugas, uts, uas; //var global

int main()
{
    //var.lokal

    //cout cin Ibuk masukkan ke dalam prosedur CetakNilai
    InputNilai();
    CetakNilai(tugas, uts, uas);

    return 0;
}
float NilaiAkhir(float N_Tugas, float N_UTS, float N_UAS)
{
    float hasil;
    hasil = (N_Tugas * 0.4) + (N_UTS * 0.3) + (N_UAS * 0.3);
    return hasil;
}
char GradeNilai(float NilaiAkhir)
{
    char grade;
    if (85 <= NilaiAkhir && NilaiAkhir <=100){
        grade = 'A';
    }
    else if (70 <= NilaiAkhir && NilaiAkhir < 85){
        grade = 'B';
    }
    else if (50 <= NilaiAkhir && NilaiAkhir < 70){
        grade = 'C';
    }
    else if (40 <= NilaiAkhir && NilaiAkhir < 50){
        grade = 'D';
    }
    else{
        grade = 'E';
    }
    return grade;
}
void CetakNilai(float N_Tugas, float N_UTS, float N_UAS)
{
    float n_akhir;
    char grd_nilai;

    n_akhir = NilaiAkhir(N_Tugas, N_UTS, N_UAS); //memanggil fungsi di dalam prosedur
    grd_nilai = GradeNilai(n_akhir);

    cout << "Nilai Tugas\t = " << N_Tugas << endl;
    cout << "Nilai UTS\t = " << N_UTS << endl;
    cout << "Nilai UAS\t = " << N_UAS << endl;

    cout << "Nilai Akhir\t = " << n_akhir << endl;
    cout << "Grade Nilai\t = " << grd_nilai << endl;
}
void InputNilai()
{
    cout << "Masukkan Nilai Tugas\t = ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS\t = ";
    cin >> uts;
    cout << "Masukkan Nilai UAS\t = ";
    cin >> uas;
    //awalnya di int main, dipindah ke sini
    //var. tugas, uts, uas bisa diakses di sini karena var. global
}
