#include <bits/stdc++.h>
using namespace std;
int main(){
	//int型20億ぐらい(オーバーフロー)	
	int a=2000000000;
	int b=a*2;
	cout <<b<<endl;

	//int64_t型
	int64_t c=2000000000;
	int64_t d=c*2;
	cout <<d<<endl;
	cout <<2000000000LL *2LL<<endl;

	//double型の出力
	cout << 3.14159265358979<<endl;
	
	//少数点以下１０桁まで
	cout<<fixed<<setprecision(10);
	cout <<3.14159265358979<<endl;

	//キャスト(型)値
	cout<<fixed<<setprecision(5);
	int e=5;
	cout <<(double)e<<endl;
	double f=3.141592;
	cout <<(int)f<<endl;

	//double型の情報落ち
	double g=1000000000;
	double h=0.000000001;
	double i=g+h;	//hの部分が消える
	cout <<fixed<<setprecision(16);
	cout <<"g:"<<g<<endl;
	cout <<"h:"<<h<<endl;
	cout <<"i:"<<i<<endl;

	//printf
	int j=12345;
	double pi=3.141592653358979;
	char k='A';
	string l="hello";
	printf("j=%d,pi=%lf,",j,pi);
	printf("k=%c,",k);
	printf("l=%s",l.c_str()); 
	
}