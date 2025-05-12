#include <iostream>
using namespace std;

int find_duplicate(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans ^= arr[i];  // XOR all elements in the array
    }

    for (int i = 1; i < n; i++) {
        ans ^= i;  // XOR from 1 to n-1
    }

    return ans;
}

int main() {
    int arr[] = {1,2,3,4,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = find_duplicate(arr, n);

    cout << "Duplicate number is: " << result << endl;
    return 0;
}
