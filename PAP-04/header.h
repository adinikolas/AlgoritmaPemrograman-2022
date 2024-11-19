#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

int count_array(int data[], int jml_data)   //Tugas 1
{
    int count;

    for(int i=0; i<jml_data-1; i++){
        if(data[i]!='\0')
            count++;
    }
    return count;
}
int cek_urut(int data[], int jml_data)  //Tugas 2
{
    if (jml_data == 1 || jml_data == 0)
        return 1;   //true

    if (data[jml_data - 1] < data[jml_data - 2])
        return 0;   //false

    return cek_urut(data, jml_data - 1);
}
void bubble_sort1(int data[], int jml_data) //Tugas 3
{
    int i, j, temp;

 	for(int i=0; i<jml_data; i++){
		cout << data[i] << " ";
	}
	cout << endl;
    for(i=0; i<jml_data-1; i++)
    {
        for(j=0; j<(jml_data-i-1); j++)
        {
            if(data[j]>data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
        for(j=0; j<jml_data; j++)
        {
            cout << data[j] << " ";
        }
        cout << endl;
    }
}
void bubble_sort2(int data[], int jml_data) //Tugas 4
{
    int i, j, temp, swapped;

    for(i=0; i<jml_data; i++){
		cout << data[i] << " ";
	}
	cout << endl;
    for (i=0; i<(jml_data-1); i++)
    {

    swapped = 0;

        for (j=0; j < (jml_data-i-1); j++)
        {
            if (data[j]>data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;

                swapped = 1;
            }
        }
        if (swapped == 0)
        break;

        for(j=0; j<jml_data; j++)
        {
            cout << data[j] << " ";
        }
        cout << endl;
    }
}

#endif // HEADER_H_INCLUDED

