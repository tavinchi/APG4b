#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	pair<int,bool> p(1000,false);
	cout <<p.second<<endl;

	p=make_pair(100,true);
	cout <<p.second<<endl;

	int a;
	bool b;
	tie(a,b)=p;
	cout <<a<<endl;
*/
	pair<int,int> a(3,1);
	pair<int,int> b(3,10);
	if(a<b){
		cout <<"bのほうがでかい";
	}else{
		cout <<"aのほうがでかい";
	}
}