#include <bits/std++ .h>
using namespace std;

void algorithm(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}

int main()
{
    int arr[] = { 83,
                  1,
                  45,
                  95,
                  45,
                  52,
                  11,
                  47,
                  0,
                  45,
                  67,
                  82 }
}