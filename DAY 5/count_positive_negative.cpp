#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a size of array: "<<endl;
    cin >> n;
    int arr[n];
    int positivecount = 0;
    int negativecount = 0;
    for (int i = 0; i < n; i++) {
        cout<<"Enter a number: "<<endl;
        cin >> arr[i];
        if (arr[i]> 0) {
            positivecount++;
        }
        else if (arr[i] < 0) {
            negativecount++;
        }
    }
    cout<<"positive count: "<<positivecount<<endl;
    cout<<"negative count: "<<negativecount<<endl;
}
