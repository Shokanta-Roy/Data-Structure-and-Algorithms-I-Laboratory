#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];  // Initialize array with size 'n'
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Modified bubble sort with alternating comparisons
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (j % 2 == 0) {
                // Even index, compare arr[j] with arr[j+1]
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            } else {
                // Odd index, compare arr[j] with arr[j+1]
                if (arr[j] < arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
