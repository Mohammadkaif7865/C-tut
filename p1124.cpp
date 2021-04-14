#include <iostream>
using namespace std;

int main()
{
    string s;
    int T, N, K, count = 0;
    cin >> n;
    if (n > 10 || n < 1)
    {
        return 0;
    }
    for (int i = 0; i < T; i++)
    {
        cin >> N >> K;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (s[j] == '*')
            {
                count++;
            }
            if (s[j] != '*')
            {
                count = 0;
            }
            if (j == N - 1 && count < K)
            {
                cout << "no" << endl;
            }
            if (count == K)
            {
                cout << "yes" << endl;
                break;
            }
        }
    }
