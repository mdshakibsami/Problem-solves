#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b) cout<<c<<endl;
        else if(a==c) cout<<b<<endl;
        else if(b==c) cout<<a<<endl;
    }
    
    
}