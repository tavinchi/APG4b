#include <bits/stdc++.h>
using namespace std;
int main(){

/*
	//最大の要素を取り出す
	priority_queue<int> pq;
	pq.push(10);
	pq.push(3);
	pq.push(6);
	pq.push(1);

	while(!pq.empty()){
		cout << pq.top() <<endl;	//最大の値出力
		pq.pop();					//最大の値削除
	}
*/

	//最小の要素を取り出す
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(10);
	pq.push(3);
	pq.push(6);
	pq.push(1);

	while(!pq.empty()){
		cout << pq.top()<<endl;
		pq.pop();
	}

	cout <<endl;
	
	priority_queue<int,vector<int>,greater<int>> ppq;
	ppq.push(7);
	ppq.push(3);
	ppq.push(10);
	ppq.push(100);

	while(!ppq.empty()){
		cout <<ppq.top()<<endl;
		ppq.pop();
	}
}