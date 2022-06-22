/*
Given a number N. Print its factorial.
Constraints - 1<=N<=100
Print answer in modulo M where M=47
*/ 

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int M=47;
	long long fact=1;
	for(int i=2;i<=n;++i){
		fact=(fact*i)%M;
	}
	cout<<fact;
	return 0;
}