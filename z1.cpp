#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 32, 213, 342, 124, 54, 56};
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
    return 0;
}