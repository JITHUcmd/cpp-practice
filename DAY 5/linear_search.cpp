#include<iostream>
using namespace std;

int main() {
    int n, i;
    int s;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "the array you entered is: " << endl;
    for (i = 0; i < n; i++) {
        cout <<  " "<<arr[i] <<endl;
    }
    cout << "Enter the element to be searched: " << endl;
    cin >> s;
    for (i = 0; i < n; i++) {
        if (s == arr[i]) {
            cout << "element found at position; " << i << endl;
            break;
        } else {
            cout << "element not found" << endl;
        }
    }
}
