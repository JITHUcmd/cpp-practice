#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool sorted = true;  // assume it's sorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << "Yes, the array is sorted." << endl;
    } else {
        cout << "No, the array is not sorted." << endl;
    }
}
