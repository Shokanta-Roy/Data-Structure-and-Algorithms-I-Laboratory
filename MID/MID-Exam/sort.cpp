#include <iostream>
using namespace std;

int sum_of_digits(int num) 
{
    int sum = 0;
    while (num != 0) 
    {
        sum += num % 10; 
        num /= 10;
    }
    return sum;
}

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort_by_digit_sum(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (sum_of_digits(arr[j]) > sum_of_digits(arr[j + 1])) 
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) 
        {
            break;
        }
    }
}

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    bubble_sort_by_digit_sum(arr, n);

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
