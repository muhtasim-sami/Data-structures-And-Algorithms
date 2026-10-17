#include <iostream>
#include "CustomStack.h"
using namespace std;

int main()
{
    void *p;
    char c[] = "hello";
    //p = c;
    //cout << *p;
    Stack<int> a;
    a.push(10);
    Stack<string> s;
    s.push("hello");
    cout << a.getTop() <<  endl;
    cout << s.getTop() << endl;
    return 0;
}
