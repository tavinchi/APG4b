#include <bits/stdc++.h>
using namespace std;
int main(){
	stack<int> s;
	s.push(10);
	s.push(1);
	s.push(3);

	queue<int> t;
	t.push(10);
	t.push(1);
	t.push(3);

	cout <<s.top()<<endl;   //最後に追加した値 
	cout <<t.front()<<endl;	//先頭の値

	s.pop();
	cout <<s.top()<<endl;
}