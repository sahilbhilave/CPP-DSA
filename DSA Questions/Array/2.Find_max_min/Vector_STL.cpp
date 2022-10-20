#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {8,5,3,2,1,12};
    int min = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());

    cout<<"Max : "<<max<<"\nMin : "<<min;
}