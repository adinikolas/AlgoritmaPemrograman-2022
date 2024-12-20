#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <conio.h>

using namespace std;

bool linearSearch(int k, int n, int A[])
{
    bool found = false;

    for(int i=0; i<n; i++)
    {
        //cout << endl << A[i] << " == " << k << endl;
        if(A[i] == k)
        {
            found = true;
            break;
        }
    }
    return found;
}
int linearSearchSentinel(int k, int n, int A[])
{
    int found = 0;
    A[n-1] = k;
    int i = 0;

    while(A[i]!=k)
    {
        i++;
    }
    if(i<n-1)
    {
        found = 1;
    }
    return found;
}
bool binarySearch(int k, int n, int A[])
{
    int found = false;
    int batasBawah = 0;
    int batasAtas = n-1;
    int mid = 0;

    while((batasBawah <= batasAtas) && (!found))
    {
        mid = (batasAtas+batasBawah)/2;
        if(A[mid] == k)
        {
            found = true;
        }else
        {
            if(A[mid] > k)
            {
                batasAtas = mid-1;
            }else
            {
                batasBawah = mid+1;
            }
        }
    }
    return found;
}

#endif // HEADER_H_INCLUDED
