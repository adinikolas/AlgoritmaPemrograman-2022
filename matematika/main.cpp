#include <iostream>
#include <stdio.h>

int Max2(int a, int b);
int Max3(int a, int b, int c);
int Max4(int a, int b, int c, int d);
int IsGanjil(int N);
int IsPrima(int N);
int NumOfPrima(int N);
int Pangkat(int basis, int eksp);
int SumOfN(int N);
int ProductOfN(int N);
float Average(int N, int count);
float AveSumOfN(int N);
float AveProdOfN(int N);
int FPB(int n, int m);
float C2F(float C);
float F2C(float F);
float C2R(float C);
float R2C(float R);
float Cel2Cal(float Cal);
float Cal2Cel(float Cel);
float R2F(float R);
float F2R(float F);

using namespace std;

int main()
{
    //fungsi matematika
    printf("Max2 --> 2 dan 5 : %d\n",Max2(2,5));
    printf("Max3 --> 2, 5,1 : %d\n",Max3(2,5,1));
    printf("Max4 --> 7, 2, 5,1 : %d\n",Max4(7,2,5,1));
    printf("IsPrima 7 : %d\n",IsPrima(7));
    printf("IsPrima 17 : %d\n",IsPrima(17));
    printf("IsPrima 70 : %d\n",IsPrima(70));
    printf("FPB(36,48) : %d\n",FPB(36,48));
    printf("IsGanjil 93 : %d\n",IsGanjil(93));
    printf("IsGanjil 1324 : %d\n",IsGanjil(1324));
    printf("NumOfPrima 70 : %d\n",NumOfPrima(70));
    printf("Pangkat(2,8) : %d\n",Pangkat(2,8));
    printf("SumOfN(15) : %d\n",SumOfN(15));
    printf("ProductOfN(15) : %d\n",ProductOfN(15));
    printf("Average(15) : %f\n",Average(15,2)); //Tambahan
    printf("AveSumOfN(15) : %f\n",AveSumOfN(15));
    printf("AveProdOfN(15) : %f\n",AveProdOfN(15));
    printf("%.2f C adalah %.2f F\n",72.5,C2F(72.5));
    printf("%.2f F adalah %.2f C\n",13.5,F2C(13.5));
    printf("%.2f C adalah %.2f R\n",72.5,C2R(72.5));
    printf("%.2f R adalah %.2f C\n",22.5,R2C(22.5));
    printf("%.2f C adalah %.2f K\n",72.5,Cel2Cal(72.5));
    printf("%.2f K adalah %.2f C\n",172.5,Cal2Cel(172.5));
    printf("%.2f R adalah %.2f F\n",72.5,R2F(72.5));
    printf("%.2f F adalah %.2f R\n",62.5,F2R(62.5));
    printf("\n");
    return 0;
}
int Max2(int a, int b) //Function Max2
{
    if (a >= b)
        return a;
    else
        return b;
}
int Max3(int a, int b, int c) //Function Max3
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int Max4(int a, int b, int c, int d) //Function Max4
{
    if (a >= b && a >= c && a>= d)
        return a;
    else if (b >= a && b >= c && b >= d)
        return b;
    else if (c >= a && c >= b && c >= d)
        return c;
    else
        return d;
}
int IsGanjil(int N) //Function IsGanjil
{
    if (N%2 == 1){
        return 1;
    }
    else{
        return 0;
    }
}
int IsPrima(int N) //Function IsPrima
{
    int bilPrima;
    if (N == 0 || N == 1){
        return 0;
    }
    else{
        for (int i=2;i<= N/2;i++){
            if (N%i == 0) {
                return 0;
                break;
            }
        }
    }
    if (bilPrima)
        return 1;
    else
        return 0;
}
int NumOfPrima(int N) //Function NumOfPrima
{
    int i,j,k,sum = 0;
    for (i=2;i<=N;i++)
    {
        k = 0;
        for (j=1;j<=i;j++)
        {
            if(i%j == 0)
            {
                k = k + 1;
            }
        }
        if (k == 2)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int Pangkat(int basis, int eksp) //Function Pangkat
{
    if (eksp == 0){
        return 1;
    }
    else{
        return basis * Pangkat (basis, eksp - 1);
    }
}
int SumOfN(int N) //Function SumOfN
{
    int sum = 0;

    for (int i=0;i<=N;i++){
        sum = sum + i;
    }
    return sum;
}
int ProductOfN(int N) //Function ProductOfN
{
    int b = 0;
    int sum = 0;
    int i = 1;
    while (i<=N)
    {
        b = sum * i;
        sum = sum + i;
        i++;+
    }
    return b;
}
float Average(int N, int count) //Function Average
{
    int jumlah;
    int rata;
    for (int i=0;i<=N;i++){
        jumlah = jumlah + i;
    }
    rata = jumlah / count;
    return rata;
}
float AveSumOfN(int N) //Function AveSumOfN
{
    int jumlah;
    int rata;
    for (int i=0;i<=N;i++){
        jumlah = jumlah + i;
    }
    rata = jumlah / N;
    return rata;
}
float AveProdOfN(int N) //Function AveProdOfN
{
    int b = 0;
    int sum = 0;
    int i = 1;
    int rata;
    while (i<=N)
    {
        b = sum * i;
        sum = sum + i;
        i++;
    }
    rata = b/N;
    return rata;
}
int FPB(int n, int m) //Function FPB
{
    while (n != m){
        if (n > m){
            n = n - m;
        }
        else{
            m = m - n;
        }
    }
    return n;
}
float C2F(float C) //Function C2F
{
    float F = (C * 9.0 / 5.0) + 32;
    return F;
}
float F2C(float F) //Function F2C
{
    float C = (F - 32) * 5.0 / 9.0;
    return C;
}
float C2R(float C) //Function C2R
{
    float R = C * (4.0 / 5.0);
    return R;
}
float R2C(float R) //Function R2C
{
    float C = R * (5.0 / 4.0);
    return C;
}
float Cel2Cal(float Cal) //Function Cel2Cal
{
    float Cel = Cal + 273.15;
    return Cel;
}
float Cal2Cel(float Cel) //Function Cal2Cel
{
    float Cal = Cel - 273.15;
    return Cal;
}
float R2F(float R) //Function R2F
{
    float F = R * (9.0 / 4.0) + 32;
    return F;
}
float F2R(float F) //Function F2R
{
    float R = (F - 32) * 4.0 / 9.0;
    return R;
}
