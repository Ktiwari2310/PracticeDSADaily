#include<vector>
#include<iostream>
using namespace std;
void main(){
	vector <int> v;
	v.push_back(2);
	v.emplace_back(3);
	for ( auto it : v){
		cout<<(it)<<"  ";
	}
}
//output 2  3
