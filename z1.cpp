#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 32, -1, 13, 12, -1, 213, 342, 124, 54, 56};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
// ? This is the O(n^2) implementation of sorting bubble sort