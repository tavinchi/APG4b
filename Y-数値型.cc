#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
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
	printf("l=%s,",l.c_str()); 
	printf("%.1lf\n",pi);
	int m=1;
	int n=99;
	int o=123;
	printf("%03d,%03d,%03d\n",m,n,o);

	//scanf
	int p;
	double pi2;
	//scanf("%d,%lf",&p,&pi2);
	//printf("p=%03d,pi2=%.2lf\n",p,pi2);

	//to_string関数(数値を文字列に変換)
	int q=100;
	string r=to_string(q);
	cout <<r+"yen"<<endl;

	//stoi,stoll,stod関数(文字列から数値に変換)
	string s="100";
	int t   =stoi(s);
	int64_t u=stoll(s);
	double v=stod(s);
	cout << t<<u<<v<<endl;
	*/
	//演習問題
	int N;
	cin >>N;
	vector<long long> A(N+1);
	A.at(0)=2;
	A.at(1)=1;
	for(int i=2;i<N+1;i++){
		A.at(i)=A.at(i-2)+A.at(i-1);
	}
	for(int i=0;i<A.size();i++){
		if(N==i){
			cout <<A.at(i)<<endl;
		}
	}
}