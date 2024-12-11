#include <iostream>
#include <cmath>
using namespace std;

int find_closest(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int closest = arr[0];
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Update the closest element if the current mid is closer to the target
        if (abs(arr[mid] - target) < abs(closest - target))
        {
            closest = arr[mid];
        }

        // Adjust search range
        if (arr[mid] == target)
        {
            return arr[mid]; // Exact match found
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return closest;
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

    int target;
    cin >> target;

    int result = find_closest(arr, n, target);
    cout << result << endl;

    return 0;
}