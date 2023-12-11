#include <iostream>
#include <string.h>
using namespace std;

const int MAX_SIZE = 20;

class Stack{
    public:
        char arr[MAX_SIZE];
        int top = -1;

        void push(char element){
            arr[++top] = element;
        }

        void pop(){
            top--;
        }

        char Top(){
            return arr[top];
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }
};


bool isMatchingPair(char char1, char char2) {
    return (char1 == '(' && char2 == ')') ||
           (char1 == '{' && char2 == '}') ||
           (char1 == '[' && char2 == ']');
}


bool isBalanced(string exp){
    int length = exp.size();
    Stack st;
    for(int i = 0; i < length; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            st.push(exp[i]);
        }else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(st.isEmpty() || !isMatchingPair(st.Top(), exp[i])){
                return false;
            }else{
                st.pop();
            }
        }
    }
    return st.isEmpty();
}



int main(){
    string expression;
    cout<<"Enter a expression:";
    cin>>expression;
    if(isBalanced(expression)){
        cout<<" The given expression is well Balanced"<<endl;
    }else{
        cout<<"The given expression is Not well balanced"<<endl;
    }
    return 0;
}