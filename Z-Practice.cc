#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
	cin >>N;
	using pa=pair<int,int>;		//型エイリアス
	using vp=vector<pa>;		//型エイリアス
	vp p(N);

	for(int i=0;i<N;i++){
		cin >>p.at(i).first>>p.at(i).second;
	}

	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(p.at(i).second>p.at(j).second){
				swap(p.at(i),p.at(j));
			}
		}
	}

	for(int i=0;i<N;i++){
		cout<<p.at(i).first<<" "<<p.at(i).second<<endl;
	}
}