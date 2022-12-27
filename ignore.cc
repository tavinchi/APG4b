#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int,int> p(3,5);
	int right;
	tie(ignore,right)=p;
	cout <<right<<endl;

	tuple<int,string,bool> tpl(2,"hello",false);
	int x;
	tie(x,ignore,ignore)=tpl;
	cout <<x<<endl;

}