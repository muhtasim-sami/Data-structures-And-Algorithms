#include "PostFix.h"
#include "PostFixEval.h"

int main()
{


    string infix = "(1+2)*(3-4)+5*(6+(7-8)*9)";
    cout <<"Infixx: "<< infix <<endl;
    string output = infixtoPostfix(infix);
    cout <<"Postfix: "<< output <<endl;
    int rs = evaluatePostfix(output);
    cout << "Result: "<< rs <<endl;
    return 0;
}
