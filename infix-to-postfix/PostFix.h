#ifndef POSTFIX_H_INCLUDED
#define POSTFIX_H_INCLUDED
#include "MyStack.h"

int precendence(char c){
    if(c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/'){
        return 2;
    }
    else return 0;
}

string infixtoPostfix(string infix){
    infix += ")";
    MyStack<char> s;
    s.push('(');
    string postfix;
    for(int i=0;i<infix.length();i++){
        char ch = infix[i];

        if(ch == '(' ){
            s.push(ch);
        }
        else if(ch >='0' && ch <= '9'){
            postfix += ch;
        }
        else if(ch==')')
        {
            while(s.getTop() != '('){
                postfix += s.getTop();
                s.pop();
            }
            s.pop();
        }
        else{ //operator
            int topPrecedence = precendence(s.getTop());
            int parsePrecedence = precendence(ch);
            if(parsePrecedence > topPrecedence){
                s.push(ch);
            }
            else{
                while(precendence(s.getTop()) >= precendence(ch)){
                    postfix += s.getTop();
                    s.pop();
                }
                s.push(ch);
            }
        }

    }
    return postfix;




}


#endif // POSTFIX_H_INCLUDED
