#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int> score;
	score["matsu"]=80;
	score["ritsu"]=99;
	cout <<score.at("matsu")<<endl;
	cout <<score.size()<<endl;
	score.erase("ritsu");
	cout <<score.size()<<endl;
	score["katsu"]=99;

	//count=所属判定
	if(score.count("matsu")){
		cout <<score.at("matsu")<<endl;
	}
}