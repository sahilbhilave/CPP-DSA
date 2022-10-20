#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {6,43,2,12,54,23,76};
    sort(v.begin(),v.end());
    int kth = 4;
    cout<<v[v.size()-kth];
}