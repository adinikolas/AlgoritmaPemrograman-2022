#include <iostream>

using namespace std;

void print_array(int *data, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

/*
Fungsi untuk mengembalikan array yang terisi dari 1 - ukurannya
*/
int * gen_return(int size){
    int *result = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        result[i] = i+1;
    }

    return result;
}
int * stat_return(int *data, int s)
{
    //result {x,x,x,x}
    //{nilai_min, nilai_max, jml_total, nilai_rerata}
    int *result = (int *)malloc(4 * sizeof(int)); //pesan array pointer 4 tempat
    //inisialisasi variabel dengan 0
    //nilai_max, jml_total, nilai_rerata
    //kalau nilai_min inisialisasi dengan nilai 100
    int nilai_min = 100, nilai_max = 0, jml_total = 0, nilai_rerata = 0;

    for(int i=0;i<s;i++) //lalu looping untuk mendapatkan nilai min, max, jml
    {
        jml_total = jml_total + data[i];
        if(data[i]<nilai_min)
            nilai_min = data[i];
        if(data[i]>nilai_max)
            nilai_max = data[i];
    }
    //keluar looping, hitung rerata
    nilai_rerata = jml_total/s;

    result[0] = nilai_min;
    result[1] = nilai_max;
    result[2] = jml_total;
    result[3] = nilai_rerata;

    return result;

}

int main(){
    int *p_array = (int *)malloc(10 * sizeof(int));
    p_array[0] = 8;
    p_array[8] = 19;

    printf("%d\n", p_array[0]);
    printf("%d\n", p_array[8]);

    p_array = (int *)malloc(20 * sizeof(int));
    p_array[15] = 99;
    printf("%d\n", p_array[15]);
    printf("%d\n", p_array[5]);

    int arr1[] = {78, 96, 57, 99, 10};
    print_array(arr1, 5);

    int *arrPtr = gen_return(25);
    print_array(arrPtr, 25);

    cout << "Stat return\n";
    int angkaStat[3] = {13,80,0};
    int *arrStat = stat_return(angkaStat,3);
    print_array(arrStat, 4);

    return 0;
}
