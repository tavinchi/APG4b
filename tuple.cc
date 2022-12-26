#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	tuple<int,string> a(3,"google");
	get<0>(a)=0;
	cout <<get<0>(a)<<endl;

	a=make_tuple(100,"hello");
	int b;
	string s;
	tie(b,s)=a;
	cout << b<<endl;
	cout << s<<endl;
	*/

	vector<tuple<int,int,int>> a;
	a.push_back(make_tuple(3,1,1));
	a.push_back(make_tuple(1,2,100));
	a.push_back(make_tuple(3,5,1));
	a.push_back(make_tuple(1,2,3));
	sort(a.begin(),a.end());

	for(tuple<int,int,int> c:a){
		int x,y,z;
		tie(x,y,z)=c;
		cout <<x<<" "<<y<<" "<<z<<endl;
	}
}