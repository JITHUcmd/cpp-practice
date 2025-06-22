#include <iostream>
using namespace std;
int main() {
    int n , i=0 , sum = 0;
    cout<<"Enter the number upto which sum is required : ";
    cin>>n;
    while(i<=n) {
        sum=sum+i;
        i=i+1;
    }
    cout<<"The sum of the given numbers is : "<<sum<<endl;
}