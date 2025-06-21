#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    char symbol;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"Enter symbol(+,-,*,/):"<<endl;
    cin>>symbol;
    if (symbol=='+') {
        c=a+b;
        cout<<"SUM:"<<c<<endl;
    }
    else if (symbol=='-') {
        c=a-b;
        cout<<"DIFFERENCE:"<<c<<endl;
    }
    else if (symbol=='*') {
        c=a*b;
        cout<<"PRODUCT:"<<c<<endl;
    }
    else if (symbol=='/') {
        if (b!=0){
            c=a/b;
            cout<<"DIVIDE:"<<c<<endl;
    }
        else if (b==0) {
            cout<<"INVALID"<<endl;
        }
    }
}