#include <bits/stdc++.h>
using namespace std;
int main(){
	deque<int> d;
	d.push_back(10);
	d.push_back(1);
	d.push_back(3);

	cout <<d.front()<< endl;
	d.pop_front();

	cout <<d.back()<<endl;
	d.pop_back();

	d.push_front(5);
	d.push_back(2);

	cout << d.at(1) <<endl;
}