#include <bits/stdc++.h>
using namespace std;
//unsolved

int main()
{
    int n, same = 0, diff = 1;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[0] == arr[i])
            same = 1;
        else
        {
            same = 0;
            break;
        }
    }
            

    if(same)
    {
        cout<<1;
    }
    else
    {
        int count=0;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j+1])
                {
                     if(arr[i+1]==arr[j+2])
                        cout<<arr[j]<<endl;

                }
                   
               
            }
        }

        
    }

    return 0;
}