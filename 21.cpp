/*
Optimization of factorial problem
Given T test cases ad in each test case
a number N. Print its factorial for each
test case % M.
Where M = 10^9+7.

Constraints 
1<=T<=10^5
1<=N<=10^5
*/ 

#include<iostream>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];

int main(){
	fact[0]=fact[1]=1;
	for(int i=2;i<N;++i){
		fact[i]=fact[i-1]*i;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fact[n]%M<<endl;
	}
	return 0;
}