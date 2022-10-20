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
}

/*
This code is efficient as it will not create copies and it will reserve size 3 for 3 inputs 
instead of increase size everytime for every input.
emplace_back : Instead of passing the object we pass the values for the population constructor parameter and then create object
We cannot pass direct values with push_back , we need to use emplace_back
*/