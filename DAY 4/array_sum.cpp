#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cout<<"Enter the element: ";
        cin >> array[i];
        sum = sum + array[i];
    }
    cout << "SUM: " << sum;
}
