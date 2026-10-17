#ifndef POSTFIXEVAL_H_INCLUDED
#define POSTFIXEVAL_H_INCLUDED
#include "MyStack.h"
int evaluatePostfix(string postfix){
    MyStack<int> s;
    for(int i=0;i<postfix.length();i++){
        char ch = postfix[i];
        if(ch >='0' && ch <= '9'){
            s.push(ch-48);
        }
        else{
            int op2 = s.getTop();
            s.pop();
            int op1 = s.getTop();
            s.pop();
            int rs=0;
            switch(ch){
                case '+':
                    rs = op1 + op2;
                    break;
                case '-':
                    rs = op1 - op2;
                    break;
                case '*':
                    rs = op1 * op2;
                    break;
                case '/':
                    rs = op1 / op2;
                    break;
            }
            s.push(rs);
        }

    }
    return s.getTop();
}



#endif // POSTFIXEVAL_H_INCLUDED
