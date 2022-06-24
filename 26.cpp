#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		long long int a,b,c,d;
		cin>>a>>b>>c>>d;
		int ct=0;
		if(b>a){
			++ct;
		}
		if(c>a){
			++ct;
		}
		if(d>a){
			++ct;
		}
		cout<<ct<<endl;
	}
	return 0;
}
