#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 32, 213, 342, 124, 54, 56};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}