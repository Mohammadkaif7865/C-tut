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
// * That's how we cheat. and 22 22 20 190702022
    return 0; 

}
// * This repo is so old that it could bw used to make back dated commit  not 13 07 2022 23 07 2022 30 6 22 27 26 25 16 06 14 18 3 1 2 3 4
// ? This is the O(n^2) implementation of sorting bubble sort