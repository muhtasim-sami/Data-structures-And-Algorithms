#include <iostream>
#include "MyLib.h"
#include "Student.h"
using namespace std;

void printArray(int *arr, int length){
    cout << *arr;
    for (int i = 0; i < length; i++){
        cout << ", " << *(arr+i);
    }
    cout << endl;
}

int main()
{
    Student s[10];
    for (int i < 0; i < 10; i++){

    }




    int arr[] = {10,125,16,123,45,65,66,76,87,112};
    int arr2[] = {10,125,16,123,45,65,66,76,87,112};
    int arr3[] = {10,125,16,123,45,65,66,76,87,112};
    int arr4[] = {12,4,5,1,45,10,6};
    /*int ar[3][3] = {
        {10,20,30},{40,50,60},{70,80,90}
    };
    cout << " " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << &ar[i][j] << endl;
        }
    }*/

    int index = LinearSearch(arr,16,10);
    if(index == -1) cout << "Not found" << endl;
    else cout << "value found in " << index << endl;
    cout << "\nthe default array : \n";
    printArray(arr,10);
    bubbleSorting(arr,10);
    cout << "after bubble sort : \n";
    printArray(arr2,10);

    insertionSort(arr2,10);
    cout << "\nafter insertion sort : \n";
    printArray(arr2,10);

    selectionSorting(arr4,7);
    cout << "\nafter insertion sort : \n";
    printArray(arr4,7);

    index = binarySearch(arr,66,10);
    if(index == -1) cout << "Not found" << endl;
    else cout << "value found in " << index << endl;

    return 0;
}
