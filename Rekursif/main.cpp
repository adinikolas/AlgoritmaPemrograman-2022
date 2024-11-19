#include <iostream>

using namespace std;

int Kali(int a, int b)
{
    if(b==1)
    {
        //cout << a << " = ";
        return a; //basis
    }
    else
    {
        //cout << a << " + ";
        return a + Kali(a, b-1); //rekursif
    }

}
int Pangkat(int a, int b)
{
    if(b==1)
        return a; //basis
    else
        return a * Pangkat(a, b-1); //rekursif
}
//2^3 = 2 * 2 * 2
//a^b = a * a * a --> a diulang sebanyak b
//    = a * (a * b-1)
int Faktorial(int n)
{
    if(n==1)
        return 1;
    else
        return n * Faktorial(n-1);
}
int fibonacci(int n){
    if(n==0 || n==1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int isPrime(int i, int num){ //bil. prima = bil, hanya bisa dibagi angka 1 & dirinya sendiri
    if(num==i)
        return 1; //true
    else if(num%i==0) //habis dibagi
        return 0; //false
    else
        return isPrime(i+1, num);
}
int sum_array(int data[], int s){
    if(s<=0){
        //cout << "= ";
        return 0;
    }
    else{
        //cout << data[s-1] << " + ";
        return sum_array(data, s-1) + data[s-1];
    }
}
void print_array(int data[], int start, int s){
    if(start==s){
        return;
    }else{
        cout << data[start] << " ";
        print_array(data, start+1, s);
    }
}
int min2(int num1, int num2){
    if(num1<num2)
        return num1;
    else
        return num2;
}
int rec_min(int data[], int cur, int arrSize){
    if(cur==arrSize-1)
        return data[cur];
    else
        return min2(data[cur], rec_min(data,cur+1,arrSize));
}

int main()
{
    cout << "3 * 4 = " << Kali(3,4) << endl;
    cout << "2 ^ 3 = " << Pangkat(2,3) << endl;
    cout << "3! = " << Faktorial(3) << endl;
    cout << "fibonacci(4) = " << fibonacci(4) << endl;
    cout << "isPrime(2,4) = " << isPrime(2,4) << endl;
    cout << "isPrime(2,5) = " << isPrime(2,5) << endl;

    int data1[] = {2, 5, 7};
    int size_data1 = sizeof(data1)/sizeof(data1[0]);
    cout << "sum_array(data1,size_data1) = " << sum_array(data1,size_data1) << endl;
    cout << "rec_min(data1,0,size_data1) = " << rec_min(data1,0,size_data1) << endl;
    print_array(data1,0,size_data1);

    return 0;
}
