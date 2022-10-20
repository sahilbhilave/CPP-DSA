#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {5,2,7,3,1};
    reverse(v.begin(),v.end());

    for(auto x : v)
    {
        cout<<x<<" ";
    }
}