#include <iostream>
#include "InsertionLib.h"
#include "DeletionLib.h"

using namespace std;

void printArray(){
    for(int i=0;i<length;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
     for(int i=1;i<=10;i++){
        insertAtLast(i);
    }
    printArray();
    insertAtPos(45,3);
    printArray();
    insertAtFirst(105);
    printArray();
    deletionFromLast();
    printArray();
    deletionFromPos(6);
    printArray();
    deletionFromFirst();
    printArray();
    cout << "Length: "<<length <<endl;
    return 0;
}
