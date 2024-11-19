#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

void printArray(int data[], int jml_data)
{
    for(int i=0; i<jml_data; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
void compress_array(int data[], int jml_data)   //Tugas 1
{
//    int i, j, found;
//    int x = 0;
//
//    for(i=0; i<jml_data; i++)
//    {
//        if(data[i]==x)
//        {
//            for(j=i; j<(jml_data-1); j++)
//                data[j] = data[j+1];
//            found = 1;
//            i--;
//            jml_data--;
//        }
//    }

    int i=0;
    for(i=0; i<jml_data; i++)
    {
        for(i=0; i<jml_data; i++)
        {
            if(data[i] == 0)
            {
                break;
            }
        }
        if(i<jml_data)
        {
            jml_data = jml_data - 1;
            for(int j=i; j<jml_data; j++)
            {
                data[j] = data[j+1];
            }
        }
    }

    printArray(data, jml_data);
}
void selection_sort1(int data[], int jml_data)  //Tugas 2
{
    int i, j, temp, min_idx;

    for(i=0; i<jml_data-1; i++)
    {
        min_idx = i;
        for(j=i+1; j<jml_data; j++)
        {
            if(data[j] < data[min_idx])
            {
                min_idx = j;
            }
        }

        temp = data[min_idx];
        data[min_idx] = data[i];
        data[i] = temp;

        printArray(data, jml_data);
    }
}
void selection_sort2(int data[], int jml_data)  //Tugas 3
{
    int i, j, temp, min_idx, numSort;

    for(i=0; i<jml_data-1; i++)
    {
        numSort = i + 1;
        min_idx = i;
        for(j=i+1; j<jml_data; j++)
        {
            numSort += *(data + j - 1) <= *(data + j);
            if(data[j] < data[min_idx])
            {
                min_idx = j;
            }
        }

        if (numSort == jml_data)
           break;

        if (min_idx != i)
        {
            temp = data[min_idx];
            data[min_idx] = data[i];
            data[i] = temp;
        }

        printArray(data, jml_data);
    }
}
int get_median(int data[], int jml_data)    //Tugas 4
{
    int i, j, temp, min_idx;

    for(i=0; i<jml_data-1; i++)
    {
        min_idx = i;
        for(j=i+1; j<jml_data; j++)
        {
            if(data[j] < data[min_idx])
            {
                min_idx = j;
            }
        }

        temp = data[min_idx];
        data[min_idx] = data[i];
        data[i] = temp;
    }

    if (jml_data%2!=0)
        return data[jml_data/2];

    return data[(jml_data-1)/2] + data[jml_data/2] / 2;
}

#endif // HEADER_H_INCLUDED
