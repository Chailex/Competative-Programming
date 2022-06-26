#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int test;
	cin>>test;
	while(test--){
		long long int n;
		cin>>n;
		long long int arr[n],flag=0,ct=0,pt=0,j=0,arr1[n];
		for (long long int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(arr[i]==0){
				pt++;
				arr1[j]=i;
				j++;
			}
			if(arr[i]>0){
				flag=1;
			}
		}
		if(pt==0){
			cout<<1<<endl;
		}
		else if(flag==0){
			cout<<0<<endl;
		}
		else{
			for (long long int i = 1; i < j; ++i)
			{
				if((arr1[i-1]-arr1[i] != -1)){
					ct++;
				}
			}
			if(arr1[j-1] != n-1){
				ct++;
			}
			cout<<ct<<endl;
		}
		
	}
	return 0;
}