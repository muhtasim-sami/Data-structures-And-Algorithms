#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED
#include<iostream>
using namespace std;
template <typename T>
class MyStack{
    private:
        int top;
        T arr[100];
    public:
        MyStack(){
            top=0;
        }
        bool isFull(){
            return top==100;
        }
        bool isEmpty(){
            return top==0;
        }
        void push(T v){
            if(!isFull()){
                arr[top] = v;
                top++;
            }
            else cout<< "Stack Overflow" <<endl;
        }
        void pop(){
            if(!isEmpty()){
                top--;
            }
            else cout << "Stack Underflow" <<endl;
        }
        T getTop(){
            return arr[top-1];
        }



};



#endif // MYSTACK_H_INCLUDED
