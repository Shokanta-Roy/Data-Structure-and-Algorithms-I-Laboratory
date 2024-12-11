#include <iostream>
using namespace std;

int findPeakElement(const int arr[], int size)
{
    int left = 0, right = size - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Compare middle element with its next element
        if (arr[mid] < arr[mid + 1])
        {
            // If the mid element is less than the next, move to the right
            left = mid + 1;
        }
        else
        {
            // Otherwise, move to the left (including mid as it could be the peak)
            right = mid;
        }
    }

    // At the end of the loop, left == right and points to the peak element
    return left;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findPeakElement(arr, n)<<endl;

    return 0;
}
