#ifndef CUSTOMSTACK_H_INCLUDED
#define CUSTOMSTACK_H_INCLUDED

template <typename dataType>
class Stack{
private:

    int top=0;
    int maxSize = 10;
    dataType arr[10];
public:
    Stack(){}
    int push(dataType value){
        if (isFull()) return -1;
        arr[top++] = value;
    }
    int pop(){
        if (isEmpty()) return -1;
        top--;
    }
    dataType getTop(){ return arr[top-1];}
    bool isFull(){return top == maxSize;}
    bool isEmpty(){return top == 0;}

};


#endif // CUSTOMSTACK_H_INCLUDED
