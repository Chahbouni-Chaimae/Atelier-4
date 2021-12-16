#include <iostream>
#include <set>
using namespace std;

int main(){

	set<int> s;
	auto it= s.emplace("5");
	it=s.emplace("5");
	cout<<it.second<<endl;
	
}
