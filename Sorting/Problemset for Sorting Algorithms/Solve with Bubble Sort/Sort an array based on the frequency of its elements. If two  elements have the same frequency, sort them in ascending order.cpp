#include<bits/stdc++.h>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort function for frequency-based sorting
void bubble_sort_frequency(int arr[], int freq[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            // Sort by frequency first, and by value if frequencies are equal
            if (freq[j] > freq[j + 1] || (freq[j] == freq[j + 1] && arr[j] > arr[j + 1]))
            {
                swap(freq[j], freq[j + 1]);
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void sort_by_frequency(int arr[], int n)
{
    // Step 1: Count frequencies
    int freq[n];
    for (int i = 0; i < n; i++)
        freq[i] = 1; // Initialize frequency as 1 for each element

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq[i]++;
                freq[j] = -1; // Mark duplicate elements
            }
        }
    }

    // Step 2: Remove duplicates and prepare for sorting
    int new_arr[n], new_freq[n], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != -1)
        {
            new_arr[index] = arr[i];
            new_freq[index] = freq[i];
            index++;
        }
    }

    // Step 3: Sort based on frequency using bubble sort
    bubble_sort_frequency(new_arr, new_freq, index);

    // Step 4: Populate the result based on sorted frequency
    int result[n], k = 0;
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < new_freq[i]; j++)
        {
            result[k++] = new_arr[i];
        }
    }

    // Step 5: Copy the result back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = result[i];
    }
}

int main()
{
    int n;
    cin >> n; // Input size of the array
    int arr[n];

    // Input elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array based on frequency
    sort_by_frequency(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
