#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int luckeyNumber=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7' || s[i]=='4')
            luckeyNumber++;

    }
    if(luckeyNumber==7 || luckeyNumber==4) cout<<"YES"<<endl;
    else cout<< "NO"<<endl;
}