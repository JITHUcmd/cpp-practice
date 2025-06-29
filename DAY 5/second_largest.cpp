// second_largest.cpp
#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n < 2) {
        cout << "At least two elements are required." << endl;
        return 1;
    }
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = numeric_limits<int>::min();
    int second_largest = numeric_limits<int>::min();
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest == numeric_limits<int>::min()) {
        cout << "There is no distinct second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second_largest << endl;
    }
}
