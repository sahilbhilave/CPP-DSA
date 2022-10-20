#include<bits/stdc++.h>

using namespace std;

struct shop
{
	string item;
	long sale;

	shop(string state, long sale)
	:item(item),sale(sale)
	{}

	shop(const shop &pop)
	:item(pop.item),sale(pop.sale)
	{
		std::cout<<"Copied";
	}
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

    vector<shop> :: iterator it;
    for(it=v.begin();it<=v.end();it++)
    {
        if(it->item == name)
        {
            cout<<"Sales are : "<<it->sale;
        }
    }

}

/*
Using Iterators to search 
*/