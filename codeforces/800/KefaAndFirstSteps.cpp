#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, max = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1] && i + 1 < n)
        {
            count++;
            if (count > max)
                max = count;
        }
        else count = 0;
    }

    cout << max + 1 << endl;
}