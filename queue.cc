#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;	//宣言
	q.push(10);
	q.push(3);
	q.push(6);
	q.push(1);

	while(!q.empty()){			//空ではない間繰り返す
		cout <<q.front() <<endl;		//先頭の要素へのアクセス
		q.pop();
	}
}