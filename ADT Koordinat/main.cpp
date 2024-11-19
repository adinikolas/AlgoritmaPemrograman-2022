#include <iostream>
#include <math.h>

using namespace std;

//ADT abstract Data Type/ Tipe data bentukan
typedef struct struct_koordinat{
    float x, y; //atribut

    void terbentuk();
}koordinat;
//prosedur milik koordinat
void koordinat::terbentuk()
{
    cout << "Koordinat terbentuk\n";
}

float jarak(koordinat k1, koordinat k2) //fungsi bebas
{
    float j = pow((k2.x - k1.x),2) + pow((k2.y - k1.y),2);
    return sqrt(j);
}
void koordinatNegatif(koordinat &k) //prosedur bebas
{
    k.x = -k.x;
    k.y = -k.y;
}
string kuadran(koordinat k) //fungsi bebas
{
    string ket;
    if(k.x>0 && k.y>0)
        ket = "Kuadran 1";
    else if(k.x<0 && k.y>0)
        ket = "Kuadran 2";
    else if(k.x<0 && k.y<0)
        ket = "Kuadran 3";
    else
        ket = "Kuadran 4";

    return ket;
}

int main()
{
    //membuat variabel
    koordinat A; //int A;
    A.terbentuk(); //prosedur nya A
    A.x = 3; // A = 3; //atribut nya A
    A.y = 4; //atribut nya A
    cout << "Koordinat A = {" << A.x << "," << A.y << "}" << endl;
    koordinat B = {6,8}; //atribut nya B
    B.terbentuk(); //prosedur nya B
    cout << "Koordinat B = {" << B.x << "," << B.y << "}" << endl;
    cout << "Jarak AB = " << jarak(A,B) << endl;

    koordinatNegatif(A);
    cout << "Koordinat A = {" << A.x << "," << A.y << "}" << endl;
    cout << "Koordinat A terletak di " << kuadran(A) << endl;
    cout << "Koordinat B terletak di " << kuadran(B) << endl;
    return 0;
}
