#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO" << endl;
    }
    else
    {

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                cout << arr[i + 1] << endl;
                break;
            }
        }
    }
    return 0;
}