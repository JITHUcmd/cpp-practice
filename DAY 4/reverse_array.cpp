#include<iostream>
using namespace std;

int main() {
    int n;
    int i;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> array[i];
    } cout << "The elements in reverse order:";
    for (i = n - 1; i >= 0; i--) {
        cout << array[i];
    }
}
