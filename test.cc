#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >>N;

	vector<tuple<string,int,int>> p(N);
	string s;
	int a;
	for(int i=0;i<N;i++){
		cin >>s>>a;
		p.at(i)=make_tuple(s,-a,i+1);
	}
	
	sort(p.begin(),p.end());

	int b;
	for(tuple<string,int,int> d:p){
		tie(ignore,ignore,b)=d;			//ignore：分解する際いらない要素を捨てる
		cout <<b<<endl;
	}

}