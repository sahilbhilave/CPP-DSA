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
	v.push_back(shop("Pens",200));
	v.push_back(shop("Books",50));
	v.push_back(shop("Gifts",100));
}

/*
This vector code is not efficient as it will copy the elements 
and then add them to the allocated memory to the vectors and 
vectors will increase its size dynamically for every input by 1
*/