#include <bits/stdc++.h>
using namespace std;
int main(){
	set<int> S;			//宣言

	S.insert(3);		//値の追加
	S.insert(7);
	S.insert(8);
	S.insert(10);
	//既に3は含まれているのでこの操作は無視される
	S.insert(3);

	//集合の要素数を出力
	cout <<"size:"<<S.size()<<endl;

	//値の削除
	S.erase(8);
	cout <<"size"<<S.size()<<endl;

	//最小値の取得
	//*begin(S);

	//最大値の取得
	//*rbegin(S);

	//7が含まれているか判定
	if(S.count(7)){
		cout <<"found 7"<<endl;
	}
	//5が含まれているか判定
	if(S.count(5)){
		cout <<"found 5"<<endl;
	}

	for(auto value:S){
		cout <<value<<endl;
	}
}