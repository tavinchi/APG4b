#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
//構造体の定義
struct MyPair{
	int x;
	string y;

	//コンストラクタ
	MyPair(){
		cout << "constructor called"<<endl;
	}

/*
	//メンバ関数
	void print(){
		//直接x,yにアクセスできる
		cout <<"x="<<x<<endl;
		cout <<"y="<<y<<endl;
	}
*/
};
int main(){
	MyPair p;
	p.x=12345;
	p.y="hello";
	cout << "p.x="<<p.x<<endl;
	cout << "p.y="<<p.y<<endl;
	//MyPair p={12345,"hello"};
	//p.print();

	//MyPair q={67890,"APG4b"};
	//q.print();
}