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
	v.push_back(population("Maharashtra",12323));
	v.push_back(population("Delhi",133223));
	v.push_back(population("Tamil Nadu",122123));
}

/*
This vector code is not efficient as it will copy the elements 
and then add them to the allocated memory to the vectors and 
vectors will increase its size dynamically for every input by 1
*/