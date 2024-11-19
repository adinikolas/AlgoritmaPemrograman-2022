#include <iostream>

int Max3(int a, int b, int c);

using namespace std;

int main()
{
    printf("Max3 --> 2, 5, 1 : %d\n",Max3(2,5,1));
    return 0;
}
int Max3(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}
