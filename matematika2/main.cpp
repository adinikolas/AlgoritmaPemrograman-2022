#include <iostream>

int IsGanjil(int n);

using namespace std;

int main(){
    printf("IsGanjil 93 : %d\n",IsGanjil(93));
    printf("IsGanjil 1324 : %d\n",IsGanjil(1324));
    return 0;
}

int IsGanjil(int n)
{
    if (n%2 == 1){
        return 1;
    }
    else{
        return 0;
    }
}
