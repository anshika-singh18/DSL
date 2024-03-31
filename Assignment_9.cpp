#include <iostream>
using namespace std;

class stack{
    char *arr;
    int top,size;

    public:

    stack(int sz){
        size=sz;
        arr=new char(sz);
        top=-1;
    }
    int flag=0;

    void push(char x){
        if (top==size-1){
            cout<<"Stack is full"<<endl;
        }

        else{
            top++;
            arr[top]=x;
        }
    }

    void pop(){
        if (top==-1){
            cout<<"Stacdk is empty"<<endl;
            flag=1;
        }

        else{
            top=top-1;
        }
    }

    int isempty(){
        if (top==-1){
            return true;
        }

        else{
            return false;
        }
    }

    void checkparenthesis(){
        string str;
        cout<<"Enter a string: ";
        cin>>str;

        for (int i=0; i<str.length();i++){
            if (str[i]=='('){
                push(str[i]);
            }

            else if(str[i]==')'){
                if (flag==1){
                    cout<<"Not well parenthsized";
                    break;
                }
                else{
                    pop();
                }
            }

            else{
                continue;
            }
        }
        if (isempty()&&flag==0){
            cout<<"Well parenthesized!"<<endl;
        }

        else{
            cout<<"Not well parenthesized!"<<endl;
        }

        
    }
};

int main(){
    stack s(10);
    s.checkparenthesis();
}