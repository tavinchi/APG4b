#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >>N;
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin >>a.at(i);
	}

	map<int,int> cnt;
	for(auto x:a){
		if(cnt.count(x)){
			cnt.at(x)++;
		}else{
			cnt[x]=1;
		}
	}

	int max_cnt=0;
	int num=-1;
	for(auto x:a){
		if(max_cnt<cnt.at(x)){
			max_cnt=cnt.at(x);
			num=x;
		}
	}
	cout << num<<" "<<max_cnt<<endl;
}