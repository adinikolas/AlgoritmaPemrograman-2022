#include <iostream>

using namespace std;

int Kali(int a, int b)
{
    if(b==1){
        cout << a << " = ";
        return a; //basis
    }
    else{
        cout << a << " + ";
        return a + Kali(a, b-1); //rekursif
    }
}
/*print di fungsi sebenarnya tidak tepat
print sebaiknya ada di prosedur
cout di sini untuk pengecekan saja
*/
int Pangkat(int a, int b)
{
    if(b==1){
        cout << a << " = ";
        return a; //basis
    }
    else{
        cout << a << " x ";
        return a * Pangkat(a, b-1); //rekursif
    }
}
//2^3 = 2 * 2 * 2
//a^b = a * a * a --> a diulang sebanyak b
//    = a * (a * b-1)
int Faktorial(int n)
{
    if(n==1){
        cout << "1 = ";
        return 1;
    }
    else{
        cout << n << " x ";
        return n * Faktorial(n-1);
    }
}
int add_rec(int num1, int num2)
{
    if(num2==0){
        cout << num1 << " = ";
        return num1; //basis
    }
    else{
        cout << 1 << " + ";
        return 1 + add_rec(num1, num2-1); //rekursif
    }
}
int subs_rec(int num1, int num2)
{
    if(num2==0){
        cout << " + " << num1 << " = ";
        return num1; //basis
    }
    else{
        cout << " - " << 1;
        return subs_rec(num1, num2-1) - 1; //rekursif
    }
}
int div_rec(int num1, int num2)
{
    if(num1<num2){
        //cout << " = ";
        return 0;
    }
    else{
        //cout << "- " << num2 << " ";
        return 1 + div_rec(num1-num2, num2);
    }
}

int main()
{
    cout << "3 * 4 = " << Kali(3,4) << endl;
    cout << "2 ^ 3 = " << Pangkat(2,3) << endl;
    cout << "3! = " << Faktorial(3) << endl;
    cout << "add_rec(5,6) = " << add_rec(5,6) << endl;
    cout << "subs_rec(7,4) =" << subs_rec(7,4) << endl;
    cout << "div_rec(20,5) = " << div_rec(20,5) << endl;
    return 0;
}
