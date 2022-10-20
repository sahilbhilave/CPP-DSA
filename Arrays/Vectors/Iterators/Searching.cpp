#include<bits/stdc++.h>

using namespace std;

struct shop
{
	string item;
	long sale;

	shop(string item, long sale)
	:item(item),sale(sale)
	{}
};

int main()
{
	vector<shop> v;
    v.reserve(3);
	v.emplace_back("Pens",200);
	v.emplace_back("Books",50);
	v.emplace_back("Gifts",100);

    string name;
    cout<<"Enter Item : ";
    getline(cin,name);

    for(auto it=v.begin();it<=v.end();it++)
    {
        if(it->item == name)
        {
            cout<<"Sales are : "<<it->sale;
        }
    }

	for(auto it:v)
	{
		cout<<"\nItem Name : "<<it.item<<"\nSales : "<<it.sale<<"\n";
	}

}

/*
Using Iterators to search 
*/