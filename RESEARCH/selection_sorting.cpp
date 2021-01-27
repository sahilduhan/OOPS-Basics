#include <bits/stdc++.h>
using namespace std;
void selection_sorted_list(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int imin = i;
        for (int j = i + 1; i < n; i++)
        {
            if (arr[j] < arr[imin])
                imin = j;
        }
        int temp = arr[imin];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
}

int main()
{
    int arr[] = {1, 3532, 3, 57, 84, 4637, 5, 85, 3, 76, 65846, 6858, 534, 76765};
    selection_sorted_list(arr, 14);
    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}