#include<bits/stdc++.h>

using namespace std;

struct population
{
	string state;
	long p;

	population(string state, long p)
	:state(state),p(p)
	{}

	population(const population &pop)
	:state(pop.state),p(pop.p)
	{
		std::cout<<"Copied";
	}
};

int main()
{
	vector<population> v;
    v.reserve(3);
	v.emplace_back("Maharashtra",12323);
	v.emplace_back("Delhi",133223);
	v.emplace_back("Tamil Nadu",122123);
}

/*
This code is efficient as it will not create copies and it will reserve size 3 for 3 inputs 
instead of increase size everytime for every input.
emplace_back : Instead of passing the object we pass the values for the population constructor parameter and then create object
We cannot pass direct values with push_back , we need to use emplace_back
*/