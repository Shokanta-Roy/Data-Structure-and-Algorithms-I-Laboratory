#include <iostream>
#include <string>
using namespace std;

void swap( int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            swap(arr[i], arr[maxIndex]);
        }
    }
}

int main() {
    string arr[] = {"banana", "apple", "watermelone"};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
