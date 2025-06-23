#include<iostream>
using namespace std;
int main() {
    int n;
    int largest;
    cout<<"Enter number of elements: ";
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++) {
        cout<<"Enter element: ";
        cin>>array[i];
    }
    largest = array[0];
    for(int i=0;i<n;i++) {
        if (array[i]>largest) {
            largest=array[i];
        }
    }cout<<"Largest element is: "<<largest;
}