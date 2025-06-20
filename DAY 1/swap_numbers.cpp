#include <iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"first number"<<a<<endl;
    cout<<"second number"<<b<<endl;
}