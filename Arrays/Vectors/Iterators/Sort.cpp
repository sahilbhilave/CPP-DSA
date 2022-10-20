#include<bits/stdc++.h>

using namespace std;

void print(vector<pair<int,int>> &v)
{
	for(auto it : v)
	{
		cout<<it.first<<","<<it.second<<" ";
	}
    cout<<"\n";
}

int main()
{
	vector<pair<int,int>> v = {{3,5},{3,3},{3,4}};
	print(v);
    sort(v.begin(),v.end());    //Sort the Vector
    print(v);
}
