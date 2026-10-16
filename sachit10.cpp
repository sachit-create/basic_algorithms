#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, d;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Rotation count: ";
    cin >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Handle cases where d >= n
    d = d % n;

    // Left rotate using STL
    rotate(arr.begin(), arr.begin() + d, arr.end());

    // Print rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
