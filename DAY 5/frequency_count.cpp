#include <iostream>
using namespace std;
int main() {
    int n;
    int s;
    int freq=0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"The array is: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]  <<  " "<<endl;
    }
    cout << endl;
    cout << "Enter the element whose frequency has to be found: ";
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (arr[i] == s) {
            freq++;
        }
    }
    cout << "The frequency of the array is: " << freq << endl;
}