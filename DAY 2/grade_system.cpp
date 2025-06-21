#include <iostream>
using namespace std;
int main() {
    int grade;
    cout<<"please enter your grade:"<<endl;
    cin>>grade;
    if (grade>=90 && grade<=100) {
        cout<<"A+";
    }
    else if (grade<=89 && grade>=80) {
        cout<<"A";
    }
    else if (grade<=79 && grade>=70) {
        cout<<"B";
    }
    else if (grade<=69 && grade>=60) {
        cout<<"C";
    }
    else if (grade<=59 && grade>=40) {
        cout<<"D";
    }
    else if (grade<50) {
        cout<<"FAIL";
    }
    else if (grade>100 || grade<0) {
        cout<<"INVAIL MARK";
    }
}