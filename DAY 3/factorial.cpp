#include <iostream>
using namespace std;
int main() {
    int n;
    int i=1,fact=1;
    cout<<"Enter the number of which factorial has to be calculated : ";
    cin>>n;
    if (n<0) {
        cout<<"Factorial not defined for negative numbers !";
    }
    else {
        for (i;i<=n;i++) {
            fact = fact * i;
        }
        cout<<"The factorial is "<<fact<<endl;
    }
}