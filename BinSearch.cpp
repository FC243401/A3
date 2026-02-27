#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    int mid;
    int found = -1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element found at index: " << found << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
